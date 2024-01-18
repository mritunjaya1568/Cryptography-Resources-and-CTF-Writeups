class FeistelNetwork():
    def __init__(
        self, /, rounds: int, block_size: int,
    ):
        self.rounds = rounds
        self.block_size = block_size
        self.round_function = self.make_round_function()

    def encrypt(self, b: int) -> int:
        l = (b >> (self.block_size // 2)) & (2 ** (self.block_size // 2) - 1)
        r = (b >> 00) & (2 ** (self.block_size // 2) - 1)

        for _ in range(self.rounds):
            l = l ^ self.round_function(r)
            l, r = r, l

        return (l << (self.block_size // 2)) + r

    def decrypt(self, b: int) -> int:
        l = (b >> (self.block_size // 2)) & (2 ** (self.block_size // 2) - 1)
        r = (b >> 00) & (2 ** (self.block_size // 2) - 1)

        l, r = r, l
        for _ in range(self.rounds):
            l = l ^ self.round_function(r)
            l, r = r, l
        l, r = r, l

        return (l << (self.block_size // 2)) + r

    def make_round_function():
        raise NotImplementedError


class GhOST(FeistelNetwork):
    rounds = 32
    block_size = 64
    def __init__(self, /, key: int, s_box: list[list[int]]):
        self.key = key
        self.s_box = s_box
        super().__init__(self.rounds, self.block_size)

    def substitute(self, x: int) -> int:
        s0 = (x >> 28) & 0xf
        s1 = (x >> 24) & 0xf
        s2 = (x >> 20) & 0xf
        s3 = (x >> 16) & 0xf
        s4 = (x >> 12) & 0xf
        s5 = (x >> 8) & 0xf
        s6 = (x >> 4) & 0xf
        s7 = (x >> 0) & 0xf
        return (
            (self.s_box[0][s0] << 28)
            + (self.s_box[1][s1] << 24)
            + (self.s_box[2][s2] << 20)
            + (self.s_box[3][s3] << 16)
            + (self.s_box[4][s4] << 12)
            + (self.s_box[5][s5] << 8)
            + (self.s_box[6][s6] << 4)
            + (self.s_box[7][s7] << 0)
        ) & 0xffffffff

    def make_round_function(self):
        def fn(x: int) -> int:
            x = (x + self.key) % (2**32)
            x = self.substitute(x)
            x = (
                (x << 11) | (x >> ((self.block_size // 2) - 11))
            ) & 0xffffffff
            return x
        return fn
