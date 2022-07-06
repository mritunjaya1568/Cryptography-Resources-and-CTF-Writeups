from functools import total_ordering
from Crypto.Util.number import *
from pwn import *
import json

VALUES = ['Ace', 'Two', 'Three', 'Four', 'Five', 'Six',
          'Seven', 'Eight', 'Nine', 'Ten', 'Jack', 'Queen', 'King']
SUITS = ['Clubs', 'Hearts', 'Diamonds', 'Spades']


deck = [f"{value} of {suit}" for suit in SUITS for value in VALUES]
mod = 2**61 - 1


def functor(lest):
	s = 0
	for i in lest:
		s = s*52 + i
	return s


IP = 'socket.cryptohack.org'
PORT = 13383

io = remote(IP,PORT)
print("connected")


seeds = []
seed = []
count = 0

inp = json.loads(io.recvline().decode().strip())
val = inp['hand']
value = val[:val.find('of')].strip()
card_value = VALUES.index(value)
seed.append(deck.index(val))
# print(val,deck.index(val),value,VALUES.index(value))

if card_value>=0 and card_value <= 7:
	io.sendline('{"choice":"high"}')
else:
	io.sendline('{"choice":"low"}')



while True:

	inp = json.loads(io.recvline().decode().strip())
	val = inp['hand']
	value = val[:val.find('of')].strip()
	card_value = VALUES.index(value)
	seed.append(deck.index(val))

	if card_value >=0 and card_value <= 7:
		io.sendline('{"choice":"high"}')
	else:
		io.sendline('{"choice":"low"}')

	msg = inp['msg']

	if 'reshuffle' in msg:
		print("recovering seed value")
		seeds.append(functor(seed))
		seed = []
		count += 1
		if count == 3 :
			break



print(seeds)


def rebase(n, b=52):
    if n < b:
        return [n]
    else:
        return rebase(n//b, b) + [n % b]

x0,x1,x2 = seeds
mul = ( (x2-x1) * inverse((x1-x0),mod) ) % mod
inc = (x1 - mul*x0) % mod
state = x2

seed = []
for i in range(20):
	state = (state * mul + inc) % mod
	seed = seed + rebase(state)

print(seed)


for i in range(len(seed)):

	inp = json.loads(io.recvline().decode().strip())
	print(inp)

	val = inp['hand']
	value = val[:val.find('of')].strip()
	card_value = VALUES.index(value)

	print(val,deck.index(val),value,VALUES.index(value))
	print(f"Our guess is {seed[i]}")

	curr = seed[i] % 13
	curr_next = seed[i+1] % 13
	if curr_next < curr:
		io.sendline('{"choice":"low"}')
	else:
		io.sendline('{"choice":"high"}')



# {'round': 200, '$': 141, 'hand': 'King of Spades', 'msg': 'Correct! Hidden card was King of Spades. Lower or higher?'}
# King of Spades 51 King 12
# Our guess is 51
# {'msg': "You pulled a 21! Here's a flag: crypto{shuffl3_tr4ck1n6_i5_1t_l3g4l?}"}


# {"choice":"high"}

# {"choice":"low"}




# we need 
''' 
{"round": 1, "$": 20, "hand": "Two of Hearts", "msg": "Welcome to my virtual casino! You are sitting down for a game of lo-hi. I will reshuffle the deck after 11 rounds. Your hand is the Two of Hearts. Lower or higher?"}
{"choice":"high"}
{"round": 2, "$": 21, "hand": "Ten of Hearts", "msg": "Correct! Hidden card was Ten of Hearts. Lower or higher?"}
{"choice":"low"}
{"round": 3, "$": 22, "hand": "Ace of Diamonds", "msg": "Correct! Hidden card was Ace of Diamonds. Lower or higher?"}
{"choice":"high"}
{"round": 4, "$": 23, "hand": "Ten of Clubs", "msg": "Correct! Hidden card was Ten of Clubs. Lower or higher?"}
{"choice":"low"}
{"round": 5, "$": 24, "hand": "Five of Spades", "msg": "Correct! Hidden card was Five of Spades. Lower or higher?"}
{"choice":"high"}
{"round": 6, "$": 25, "hand": "Seven of Spades", "msg": "Correct! Hidden card was Seven of Spades. Lower or higher?"}
{"choice":"high"}
{"round": 7, "$": 26, "hand": "King of Hearts", "msg": "Correct! Hidden card was King of Hearts. Lower or higher?"}
{"choice":"low"}
{"round": 8, "$": 27, "hand": "Seven of Clubs", "msg": "Correct! Hidden card was Seven of Clubs. Lower or higher?"}
{"choice":"high"}
{"round": 9, "$": 25, "hand": "Two of Spades", "msg": "Incorrect! Hidden card was Two of Spades. Lower or higher?"}
{"choice":"high"}
{"round": 10, "$": 26, "hand": "Nine of Clubs", "msg": "Correct! Hidden card was Nine of Clubs. Lower or higher?"}
{"choice":"low"}
{"round": 11, "$": 27, "hand": "Eight of Spades", "msg": "Correct! Hidden card was Eight of Spades. I will reshuffle the deck after 11 rounds. Lower or higher?"}
{"choice":"low"}
{"round": 12, "$": 25, "hand": "Eight of Clubs", "msg": "Incorrect! Hidden card was Eight of Clubs. Lower or higher?"}
{"choice":"low"}
{"round": 13, "$": 26, "hand": "Five of Clubs", "msg": "Correct! Hidden card was Five of Clubs. Lower or higher?"}
{"choice":"high"}
{"round": 14, "$": 27, "hand": "Ten of Diamonds", "msg": "Correct! Hidden card was Ten of Diamonds. Lower or higher?"}
{"choice":"low"}
{"round": 15, "$": 25, "hand": "King of Hearts", "msg": "Incorrect! Hidden card was King of Hearts. Lower or higher?"}
{"choice":"low"}
{"round": 16, "$": 26, "hand": "Queen of Hearts", "msg": "Correct! Hidden card was Queen of Hearts. Lower or higher?"}
{"choice":"low"}
{"round": 17, "$": 27, "hand": "Two of Clubs", "msg": "Correct! Hidden card was Two of Clubs. Lower or higher?"}
{"choice":"high"}
{"round": 18, "$": 25, "hand": "Two of Hearts", "msg": "Incorrect! Hidden card was Two of Hearts. Lower or higher?"}
{"choice":"high"}
{"round": 19, "$": 23, "hand": "Two of Diamonds", "msg": "Incorrect! Hidden card was Two of Diamonds. Lower or higher?"}
{"choice":"high"}
{"round": 20, "$": 24, "hand": "Ten of Spades", "msg": "Correct! Hidden card was Ten of Spades. Lower or higher?"}
{"choice":"low"}
{"round": 21, "$": 25, "hand": "Three of Clubs", "msg": "Correct! Hidden card was Three of Clubs. Lower or higher?"}
{"choice":"high"}
{"round": 22, "$": 26, "hand": "Jack of Clubs", "msg": "Correct! Hidden card was Jack of Clubs. I will reshuffle the deck after 11 rounds. Lower or higher?"}
{"choice":"low"}
{"round": 23, "$": 27, "hand": "Three of Clubs", "msg": "Correct! Hidden card was Three of Clubs. Lower or higher?"}
{"choice":"high"}
{"round": 24, "$": 25, "hand": "Ace of Spades", "msg": "Incorrect! Hidden card was Ace of Spades. Lower or higher?"}
{"choice":"high"}
{"round": 25, "$": 26, "hand": "Five of Diamonds", "msg": "Correct! Hidden card was Five of Diamonds. Lower or higher?"}
{"choice":"high"}
{"round": 26, "$": 27, "hand": "King of Hearts", "msg": "Correct! Hidden card was King of Hearts. Lower or higher?"}
{"choice":"low"}
{"round": 27, "$": 28, "hand": "Three of Hearts", "msg": "Correct! Hidden card was Three of Hearts. Lower or higher?"}
{"choice":"high"}
{"round": 28, "$": 29, "hand": "Ten of Hearts", "msg": "Correct! Hidden card was Ten of Hearts. Lower or higher?"}
{"choice":"low"}
{"round": 29, "$": 27, "hand": "Ten of Clubs", "msg": "Incorrect! Hidden card was Ten of Clubs. Lower or higher?"}
{"choice":"low"}
{"round": 30, "$": 28, "hand": "Three of Diamonds", "msg": "Correct! Hidden card was Three of Diamonds. Lower or higher?"}
{"choice":"high"}
{"round": 31, "$": 29, "hand": "Seven of Spades", "msg": "Correct! Hidden card was Seven of Spades. Lower or higher?"}
{"choice":"high"}
{"round": 32, "$": 27, "hand": "Three of Diamonds", "msg": "Incorrect! Hidden card was Three of Diamonds. Lower or higher?"}
{"choice":"high"}
{"round": 33, "$": 25, "hand": "Three of Hearts", "msg": "Incorrect! Hidden card was Three of Hearts. I will reshuffle the deck after 11 rounds. Lower or higher?"}
'''
