## https://github.com/RobinDavid/pydes/blob/master/pydes.py

import operator
from textwrap import wrap
from functools import reduce

INITIAL_PERMUTATION = [
 57, 49, 41, 33, 25, 17, 9, 1,
 59, 51, 43, 35, 27, 19, 11, 3,
 61, 53, 45, 37, 29, 21, 13, 5,
 63, 55, 47, 39, 31, 23, 15, 7,
 56, 48, 40, 32, 24, 16, 8, 0,
 58, 50, 42, 34, 26, 18, 10, 2,
 60, 52, 44, 36, 28, 20, 12, 4,
 62, 54, 46, 38, 30, 22, 14, 6]
INVERSE_PERMUTATION = [
 39, 7, 47, 15, 55, 23, 63, 31,
 38, 6, 46, 14, 54, 22, 62, 30,
 37, 5, 45, 13, 53, 21, 61, 29,
 36, 4, 44, 12, 52, 20, 60, 28,
 35, 3, 43, 11, 51, 19, 59, 27,
 34, 2, 42, 10, 50, 18, 58, 26,
 33, 1, 41, 9, 49, 17, 57, 25,
 32, 0, 40, 8, 48, 16, 56, 24]
SUB_BOXES = [
 [
  14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7,
  0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8,
  4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0,
  15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13],
 [
  15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12, 0, 5, 10,
  3, 13, 4, 7, 15, 2, 8, 14, 12, 0, 1, 10, 6, 9, 11, 5,
  0, 14, 7, 11, 10, 4, 13, 1, 5, 8, 12, 6, 9, 3, 2, 15,
  13, 8, 10, 1, 3, 15, 4, 2, 11, 6, 7, 12, 0, 5, 14, 9],
 [
  10, 0, 9, 14, 6, 3, 15, 5, 1, 13, 12, 7, 11, 4, 2, 8,
  13, 7, 0, 9, 3, 4, 6, 10, 2, 8, 5, 14, 12, 11, 15, 1,
  13, 6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12, 5, 10, 14, 7,
  1, 10, 13, 0, 6, 9, 8, 7, 4, 15, 14, 3, 11, 5, 2, 12],
 [
  7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11, 12, 4, 15,
  13, 8, 11, 5, 6, 15, 0, 3, 4, 7, 2, 12, 1, 10, 14, 9,
  10, 6, 9, 0, 12, 11, 7, 13, 15, 1, 3, 14, 5, 2, 8, 4,
  3, 15, 0, 6, 10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14],
 [
  2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13, 0, 14, 9,
  14, 11, 2, 12, 4, 7, 13, 1, 5, 0, 15, 10, 3, 9, 8, 6,
  4, 2, 1, 11, 10, 13, 7, 8, 15, 9, 12, 5, 6, 3, 0, 14,
  11, 8, 12, 7, 1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3],
 [
  12, 1, 10, 15, 9, 2, 6, 8, 0, 13, 3, 4, 14, 7, 5, 11,
  10, 15, 4, 2, 7, 12, 9, 5, 6, 1, 13, 14, 0, 11, 3, 8,
  9, 14, 15, 5, 2, 8, 12, 3, 7, 0, 4, 10, 1, 13, 11, 6,
  4, 3, 2, 12, 9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13],
 [
  4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5, 10, 6, 1,
  13, 0, 11, 7, 4, 9, 1, 10, 14, 3, 5, 12, 2, 15, 8, 6,
  1, 4, 11, 13, 12, 3, 7, 14, 10, 15, 6, 8, 0, 5, 9, 2,
  6, 11, 13, 8, 1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12],
 [
  13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5, 0, 12, 7,
  1, 15, 13, 8, 10, 3, 7, 4, 12, 5, 6, 11, 0, 14, 9, 2,
  7, 11, 4, 1, 9, 12, 14, 2, 0, 6, 10, 13, 15, 3, 5, 8,
  2, 1, 14, 7, 4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11]]
EXPANSION = [
 31, 0, 1, 2, 3, 4,
 3, 4, 5, 6, 7, 8,
 7, 8, 9, 10, 11, 12,
 11, 12, 13, 14, 15, 16,
 15, 16, 17, 18, 19, 20,
 19, 20, 21, 22, 23, 24,
 23, 24, 25, 26, 27, 28,
 27, 28, 29, 30, 31, 0]
PERMUTATION = [
 15, 6, 19, 20, 28, 11, 27, 16,
 0, 14, 22, 25, 4, 17, 30, 9,
 1, 7, 23, 13, 31, 26, 2, 8,
 18, 12, 29, 5, 21, 10, 3, 24]
PERMUTED_CHOICE_1 = [
 56, 48, 40, 32, 24, 16, 8,
 0, 57, 49, 41, 33, 25, 17,
 9, 1, 58, 50, 42, 34, 26,
 18, 10, 2, 59, 51, 43, 35,
 62, 54, 46, 38, 30, 22, 14,
 6, 61, 53, 45, 37, 29, 21,
 13, 5, 60, 52, 44, 36, 28,
 20, 12, 4, 27, 19, 11, 3]
PERMUTED_CHOICE_2 = [
 13, 16, 10, 23, 0, 4,
 2, 27, 14, 5, 20, 9,
 22, 18, 11, 3, 25, 7,
 15, 6, 26, 19, 12, 1,
 40, 51, 30, 36, 46, 54,
 29, 39, 50, 44, 32, 47,
 43, 48, 38, 55, 33, 52,
 45, 41, 49, 35, 28, 31]
ROTATES = [
 1, 2, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1]

def slice_string(string):
    return [i.zfill(16) for i in wrap(''.join([hex(ord(i))[2:] for i in string]), 16)]


def to_bin(s):
    return ''.join([bin(int(i, 16))[2:].zfill(4) for i in s])


def permutation(block, box):
    return ''.join([block[i] for i in box])


def xor(arg_1, arg_2):
    return ''.join([str(int(i) ^ int(j)) for i, j in zip(arg_1, arg_2)])


def concatenate(args):
    return reduce(operator.iadd, args, [])


def rotate_left(block, i):
    return bin(int(block, 2) << i & 268435455 | int(block, 2) >> 28 - i)[2:].zfill(28)


def key_gen(block_1, block_2):
    li = []
    for i in ROTATES:
        block_1 = rotate_left(block_1, i)
        block_2 = rotate_left(block_2, i)
        li.append(permutation(block_1 + block_2, PERMUTED_CHOICE_2))
    else:
        return li


def f(block, key):
    final = []
    for j, i in enumerate(wrap(xor(permutation(block, EXPANSION), key), 6)):
        temp_box = [SUB_BOXES[0][0:16],
         SUB_BOXES[0][16:32],
         SUB_BOXES[0][32:48],
         SUB_BOXES[0][48:64]]
        final.append(bin(temp_box[int(i[0] + i[(-1)], 2)][int(i[1:-1], 2)])[2:].zfill(4))
    else:
        return permutation(''.join(final), PERMUTATION)


def des(block, key_array):
    left, right = block[0:len(block) // 2], block[len(block) // 2:]
    for j, i in zip(range(1, 17), key_array):
        right, left = xor(f(right, i), left), right
    else:
        return wrap(permutation(right + left, INVERSE_PERMUTATION), 8)


# def main(string,KEY):
#     encrypted_list = []
#     for i in slice_string(string):
#         bin_mess, bin_key = to_bin(i), to_bin(KEY)
#         permuted_key, permuted_block = permutation(bin_key, PERMUTED_CHOICE_1), permutation(bin_mess, INITIAL_PERMUTATION)
#         key_list = key_gen(permuted_key[:len(permuted_key) // 2], permuted_key[len(permuted_key) // 2:])
#         encrypted_list.append(''.join([hex(int(i, 2))[2:].zfill(2).lower() for i in des(permuted_block, key_list)]))
#     else:
#         return ''.join(encrypted_list)


# reverse of slice string - hex to ascii , just the last val 
def rev_slice(lest):
    return bytes.fromhex(''.join(i for i in lest[:-1]) + hex(int(lest[-1],16))[2:]).decode()

def rev_bin(string):
    result = ''
    for i in range(0,len(string),4):
        result += hex(int(string[i:i+4],2))[2:]
    return result

def decrypt_des(block, key_array):
    result = permutation(block,INITIAL_PERMUTATION)
    result_right, result_left =  result[0:len(result) // 2], result[len(result) // 2:]

    lest = key_array[::-1]

    left, right = result_left , result_right
    for j, i in zip(range(1, 17), lest):
        right, left = left, xor(right, f(left,i))
    else:
        return left + right

def lakshya_e(block,key_list):
    ct_block = ''.join(i for i in des(block,key_list))
    print(ct_block)
    return str(ct_block)

# takes 64 bit ciphertext block
def lakshya_d(ct_block, key_list):
    block = ''.join(i for i in decrypt_des(ct_block,key_list))
    print(block)
    return str(block)


def main(string,key_list):
    encrypted_list = []
    print(slice_string(string))
    for i in slice_string(string):
        bin_mess = to_bin(i) # 64 bit 
        # print(bin_mess) # we got bin_mess till now
        permuted_block = permutation(bin_mess, INITIAL_PERMUTATION) # permutation(ct, INVERSE_PERMUTATION)
        print("permuted block ",permuted_block) # 64 bits
        # print("result of des",des(permuted_block,key_list))
        # for i in des(permuted_block,key_list):
        #     print(i)
        encrypted_list.append(''.join([hex(int(i, 2))[2:].zfill(2).lower() for i in des(permuted_block, key_list)])) # take 8 bit binary values and convert them to hex in lowercase letters
    else:
        return ''.join(encrypted_list)


ct = '7cd245e589aa384ac19dddfafb189650e8c1e6eb13fd52bc'
KEY = '8324465191921420'

key_list = ['000000100000001010111011110100100010000000010000', '101111010001100000000100001000010010001100001000', '000000100010101011001000001100000011000000000010', '000110000111010000110100011001000000000000100110', '110001000000110101001000000001000010100011001010', '010000101110001000100101001001001001000001010001', '100010011001110100000010000000111000010001100010', '011000000010001011101011000011001000110100000000', '001010001001001010110100000101000001000000101000', '100101000001100001001010110000000001100001100000', '001000100110001001110000000000001010101000111000', '100011000101110100000100001100010001110000010000', '010000100010001101011001000010010000000000110010', '000011011101010000100001000001010110100000000100', '110000110000100111001010001000000000000011010100', '000000100000001010111011110100100010000000010000']


# steps to reverse the main function

# 1st - take the hex value and then convert every hex value to 8 bit binary number

# combine in 64 bit value, take every 64 bit value and call lakshya_d function

# 2nd - take the inverse of permutation with inverse_permutation

# 3rd - 

def decrypt_main(ct,key_list):
    encrypt_ct = []
    mritunjya = ''
    for i in range(0,len(ct),2):
        string = ct[i:i+2]
        mritunjya += bin(int(string,16))[2:].zfill(8)
    
    lest = []
    for i in range(0,len(mritunjya),64):
        lest.append(rev_bin(permutation(lakshya_d(mritunjya[i:i+64],key_list),INVERSE_PERMUTATION)))

    print(rev_slice(lest))

decrypt_main(ct,key_list)




# CTFZone{Str0ng_D3S}






