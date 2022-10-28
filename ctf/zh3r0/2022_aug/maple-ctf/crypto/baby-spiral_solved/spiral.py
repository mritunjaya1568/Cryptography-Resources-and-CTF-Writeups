from utils import *


class Spiral:
    def __init__(self, key, rounds=4):
        self.rounds = rounds
        self.keys = [bytes2matrix(key)] # 3-d matrix
        self.BLOCK_SIZE = 16

        for i in range(rounds):
            self.keys.append(spiralLeft(self.keys[-1]))

    def encrypt(self, plaintext):
        # padding done here
        if len(plaintext) % self.BLOCK_SIZE != 0:
            padding = self.BLOCK_SIZE - len(plaintext) % self.BLOCK_SIZE
            plaintext += bytes([padding] * padding)
        # take 16 bytes at a time , and call encrypt_block function 
        ciphertext = b""
        for i in range(0, len(plaintext), 16):
            ciphertext += self.encrypt_block(plaintext[i : i + 16])
        return ciphertext

    def encrypt_block(self, plaintext):
        self.state = bytes2matrix(plaintext) # 2d matrix of 4 * 4
        self.add_key(0)

        for i in range(1, self.rounds):
            self.substitute() # inverse of s-box - we have inverse now
            self.rotate() # do spiral left of matrix
            self.mix() # inverse(SPIRAL) * output_matrix -> original matrix
            self.add_key(i) # (output_matrix - key[idx])%255

        self.substitute() # inverse of s-box - we have inverse now
        self.rotate() # do spiral left of matrix
        self.add_key(self.rounds) # (output_matrix - key[idx])%255

        return matrix2bytes(self.state) # bytes2matrix(output_matrix)

    # addition of 2 matrix mod 255 , and 2nd matrix will be keys[idx]
    def add_key(self, idx):
        for i in range(4):
            for j in range(4):
                self.state[i][j] = (self.state[i][j] + self.keys[idx][i][j]) % 255

    # find inverse of s-box 
    def substitute(self):
        for i in range(4):
            for j in range(4):
                self.state[i][j] = SBOX[self.state[i][j]]
                # 4 -> SBOX[4] == 237
                # 237 -> INV_BOX[237] == 4


    def rotate(self):
        self.state = spiralRight(self.state)

    # matrix multiplication of 2 matrix - state = (SPIRAL * state)%255;   
    def mix(self):
        out = [[0 for _ in range(4)] for _ in range(4)]
        for i in range(4):
            for j in range(4):
                for k in range(4):
                    out[i][j] += SPIRAL[i][k] * self.state[k][j]
                out[i][j] %= 255

        self.state = out


def substitute(state):
    for i in range(4):
        for j in range(4):
            state[i][j] = SBOX[state[i][j]]

def inv_substitute(output):
    for i in range(4):
        for j in range(4):
            output[i][j] = INV_SBOX[output[i][j]]


# keys[1] = spiralLeft(keys[0])
def encrypt_block(self, plaintext):
    self.state = bytes2matrix(plaintext) # 2d matrix of 4 * 4
    self.add_key(0) # (output_matrix - keys[0]) % 255

    for i in range(1, self.rounds):
        self.substitute() # inv_substitute(matrix)
        self.rotate() # do spiral left of matrix
        self.mix() # inverse(SPIRAL) * output_matrix -> original matrix
        self.add_key(i) # (output_matrix - keys[1])%255

    self.substitute() # inv_substitute(output)
    self.rotate() # spiralLeft(output)
    self.add_key(self.rounds) # (output_matrix - key[1]) % 255


# keys[1] = spiralLeft(keys[0])
def encrypt_block(self, plaintext):
    self.state = bytes2matrix(plaintext) # 4 * 4 - 0 matrix
    self.add_key(0) # keys[0]


    self.substitute() # SBOX[keys[0]]
    self.rotate() # spiralRight(SBOX[keys[0]])
    self.add_key(self.rounds) # spiralRight(SBOX[keys[0]]) + keys[1]







# def add_key(state,key):
#     for i in range(4):
#         for j in range(4):
#             state[i][j] = (state[i][j] + key[i][j]) % 255





# pti = b'\x00' * i + b'\x01' + b'\x00' * (15-i)

SBOX = [184, 79, 76, 49, 237, 28, 54, 183, 106, 24, 192, 7, 43, 111, 175, 44, 46, 199, 182, 115, 83, 227, 61, 230, 6, 57, 165, 137, 58, 14, 94, 217, 66, 120, 53, 142, 29, 150, 103, 75, 186, 39, 31, 196, 18, 207, 244, 16, 213, 243, 114, 251, 96, 4, 138, 197, 10, 176, 157, 91, 238, 155, 254, 71, 86, 37, 130, 12, 52, 162, 220, 56, 88, 188, 27, 208, 25, 51, 172, 141, 168, 253, 85, 193, 90, 35, 95, 105, 200, 127, 247, 21, 93, 67, 13, 235, 84, 190, 225, 119, 189, 81, 250, 117, 231, 50, 179, 22, 223, 26, 228, 132, 139, 166, 210, 23, 64, 108, 212, 201, 99, 218, 160, 240, 129, 224, 233, 242, 159, 47, 126, 125, 146, 229, 0, 252, 161, 98, 30, 63, 239, 164, 36, 80, 151, 245, 38, 107, 3, 65, 73, 204, 8, 205, 82, 78, 173, 112, 219, 136, 123, 149, 118, 32, 215, 163, 74, 134, 248, 68, 110, 45, 59, 145, 178, 156, 100, 177, 221, 2, 92, 20, 40, 144, 101, 140, 169, 116, 143, 202, 1, 113, 209, 104, 133, 128, 70, 89, 216, 147, 122, 131, 9, 249, 121, 109, 191, 77, 124, 246, 55, 198, 187, 185, 17, 60, 180, 203, 19, 158, 97, 206, 148, 5, 87, 170, 236, 222, 194, 15, 214, 241, 211, 234, 42, 41, 153, 62, 102, 152, 69, 181, 34, 48, 226, 11, 195, 154, 174, 167, 135, 232, 72, 171, 33]
dest = {}
for i in range(254):
    dest[i] = (SBOX[i]-SBOX[i+1])%255

print(dest)



