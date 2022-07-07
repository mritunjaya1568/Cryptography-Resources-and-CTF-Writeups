from fastecdsa.curve import P256
from fastecdsa.point import Point
from Crypto.Random import random
from utils import listener

FLAG = 'crypto{???????????????????}'


class RNG:
    def __init__(self, seed, P, Q):
        self.seed = seed
        self.P = P
        self.Q = Q

    def next(self):
        t = self.seed
        s = (t * self.P).x
        self.seed = s
        r = (s * self.Q).x
        return r & (2**(8 * 30) - 1)


class Game:
    reds = {1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36}
    blacks = {2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 22, 24, 26, 28, 29, 31, 33, 35}
    odds = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35}
    evens = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36}

    def __init__(self, P, Q):
        self.rng = RNG(random.getrandbits(60), P, Q)
        self.num_spins = None
        self.change_croupier()

    def rebase(self, n, b=37):
        if n < b:
            return [n]
        else:
            return [n % b] + self.rebase(n//b, b)

    def change_croupier(self):
        self.spins = self.rebase(self.rng.next())
        return len(self.spins)

    def spin_wheel(self):
        number = self.spins.pop()
        if self.spins == []:
            self.num_spins = self.change_croupier()

        return number


class Challenge():
    def __init__(self):
        self.before_input = "Welcome to my virtual casino! You are sitting down for a game of roulette. This is a fair casino. We have chosen our lucky point, now you get to choose one too.\n"
        self.funds = 20
        self.dollars = self.funds
        self.round = 0


    def challenge(self, your_input):
        self.round += 1

        if self.round == 1:
            casino_x = "0x6b17d1f2e12c4247f8bce6e563a440f277037d812deb33a0f4a13945d898c296"
            casino_y = "0x4fe342e2fe1a7f9b8ee7eb4a7c0f9e162bce33576b315ececbb6406837bf51f5"
            P = Point(int(casino_x, 16), int(casino_y, 16))

            player_x = your_input["x"]
            player_y = your_input["y"]
            Q = Point(int(player_x, 16), int(player_y, 16))

            self.game = Game(P, Q)

            croupier_msg = "Good evening, I will be your croupier for your first bets. "
            return {"msg": f"{croupier_msg}The table is setup, place your bet!"}

        elif self.dollars <= 0:
            self.exit = True
            return {"error": "You're broke!"}

        elif self.round == 125:
            self.exit = True
            if self.dollars >= 1000:
                return {"msg": f"Congratulations Mr Jarecki! Here's a flag: {FLAG}"}
            elif self.dollars > self.funds:
                return {"msg": f"Nice, you beat the house!"}
            else:
                return {"msg": f"Aww, have a free drink!"}

        elif not 'choice' in your_input:
            self.exit = True
            return {"error": "You must make a choice"}

        else:
            bet = your_input["choice"]
            spin = self.game.spin_wheel()

            if bet == spin:
                msg = "Boom, fantastic guess!"
                self.dollars += 35
            elif bet == "EVEN" and spin in self.game.evens:
                msg = "Nice bet!"
                self.dollars += 1
            elif bet == "ODD" and spin in self.game.odds:
                msg = "Nice bet!"
                self.dollars += 1
            elif bet == "RED" and spin in self.game.reds:
                msg = "Nice bet!"
                self.dollars += 1
            elif bet == "BLACK" and spin in self.game.blacks:
                msg = "Nice bet!"
                self.dollars += 1
            else:
                msg = "Aww, try again."
                self.dollars -= 1

            croupier_msg = ""
            if self.game.num_spins:
                croupier_msg = f"Good evening, I will be your new croupier for the time being. "
                self.game.num_spins = None

            return {
                "msg": f"{croupier_msg}The ball landed on {spin}. {msg}",
                "spin": spin,
                "round": self.round,
                "$": self.dollars,
            }


listener.start_server(port=13387)
