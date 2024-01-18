import itertools
from tqdm import tqdm

from sage.all import QQ
from sage.all import ZZ
from sage.all import matrix
from sage.all import vector


def attack(y, k, s, m, a, c):
    """
    Recovers the states associated with the outputs from a truncated linear congruential generator.
    More information: Frieze, A. et al., "Reconstructing Truncated Integer Variables Satisfying Linear Congruences"
    :param y: the sequential output values obtained from the truncated LCG (the states truncated to s most significant bits)
    :param k: the bit length of the states
    :param s: the bit length of the outputs
    :param m: the modulus of the LCG
    :param a: the multiplier of the LCG
    :param c: the increment of the LCG
    :return: a list containing the states associated with the provided outputs
    """
    diff_bit_length = k - s

    # Preparing for the lattice reduction.
    delta = c % m
    y = vector(ZZ, y)
    for i in range(len(y)):
        # Shift output value to the MSBs and remove the increment.
        y[i] = (y[i] << diff_bit_length) - delta
        delta = (a * delta + c) % m

    # This lattice only works for increment = 0.
    B = matrix(ZZ, len(y), len(y))
    B[0, 0] = m
    for i in range(1, len(y)):
        B[i, 0] = a ** i
        B[i, i] = -1

    B = B.LLL()

    # Finding the target value to solve the equation for the states.
    b = B * y
    for i in range(len(b)):
        b[i] = round(QQ(b[i]) / m) * m - b[i]

    # Recovering the states
    delta = c % m
    x = list(B.solve_right(b))
    for i, state in enumerate(x):
        # Adding the MSBs and the increment back again.
        x[i] = int(y[i] + state + delta)
        delta = (a * delta + c) % m

    return x

mod = 8232312959811687665793375850697161475128245885498087244865661043365300427355910967177802992671927606112967162365226385902985055038600150891334303906988843
a = 3055763714607900494177504906108411234454644105114099018645855066194700452978283478744975758997105914178847284836362790528948986649361497510600406623584111
b = 7351825758871936188887387432551602258325160142617201131366588310969110047163778207379995720583442081379732379822344928656145390144148695992504225966963749

vect = ["0694904f5ec5c60ca51f22619f5e096df39e10a70896ab8c829891a646580bac224f9dbe73c72e7ea29cf65f6416d1d9f69db46d", "097f3e4d613244220036c2e647187e561e2212cfabf5974f0ccd3e06b92f71f70bc9b0fe032e382843f0c638049045293ced962c", "07ffdc07515f5cfc15650dd781f6375c7e3d02b103d767f44bcd18c0f7a3f1a801fe0f7041c91053353c718611d4c5cddd26ca4b", "082dff101c042e7c9b02aeb6fab3d8a1a16ca30116a55831bd3ca8ae59d258fa38c2851844ce2f578433c49a99d241f819b00253", "49e8f886d487b86b2b11213db3de474ca083212b770473d1de98b871bcfef83f3be4b8634803c5c7b994dfb475907db4c59685", "03d2ef82d26b72c9837332cfd48ba46060cec3729bf5ce649c3281fb9f6607c780e7a735f79a8e2294a8985a9f88e94476444efd", "0872485fe28ac9322ddaba9a6dadd4235cd415bb45f3fea11932bf8965861dc618d81986c8dfe6ff9ebed261f0920f12bce14dd5", "02e5711e552e75839f331d9a7c51ded7802922584f0dceeb294bf49fc67d3ddd4f9ea74adf7c02068db18bf1856823c4773af501", "082508a225bae1aefe8ede95f9e3802bb96f3d59d72aee6e37484c851304f3a595d9fb2098336bedb584b8fca452034ccc02f69c", "089d9ad3cd14b3b4de7e00f44140544bcf657c3854a797bcd8dbc7fc8a82326ba5f9695178bbd4a2f65052e93bbde306590c5a3a", "1072a51e7fd58e6495c32b7443cfe5730d2f215f7bf7a120d8a1313b5f12371eb60b95338f7f04832bd7807f6d4b7aff730ca4", "0952f7299f1643f8b4cab0426e9616b2fea4689e5646321d7f35e773dbd4b0d28ded4bfd0e36963372ddfcf08971538ee6009cea", "06dedf82f52f90a4560137b799ee0f7178e6a0906735ce2ad690440bb917640cd069ef4734fa1ce3b3a4319a72b7ec9548682426", "08774c3032a47a0419a5a70f17f1644d62c7da00d4b58452f3721a77989af65453bb228b0cef3f9f32a19689e36e5ec2466106fc", "01dde17de4356eedbc55b26eb74d31aca65482f515e5e13673c4f4c4266a9ab97f0d99080468f523c0af750022778d050bc9a9da", "013f10a9903d80c02a8c82d8035adb6e0ab2cea306145e93cfc76e9ee608db386300a39deb63a1f1624b205469dac9ed215a678e", "0289bb6860ba0b5e07df981109016dccd783c849faddb2a1d27d83fff393f7ffeb278da35c5b2afccd88410c4c704a12d1627a4d", "01abc0d905256ba00a2141dd3a79dae5ed750f5e370b799ba8ccc67a0c2f9d661fc34a38407b985e7f220f75bb04440d4d641061", "05354e3dec110c07908af8f1687374098f7ac558eb5f7d46d99429523de4c9fabfd71f8605bb6c66bc5763e270d4952a068c087a", "0342826fbc0a0de4e3c3e4b094c5a9df166b3f9416a7881eae79bab145f0f00d8e8a993ddcb78b6107fe437d932eb989c1fec2e1"]

vect2 = []
for i in vect:
    vect2.append(int(i,16))

# generate all combinations of vect2 by shuffling them
# and then check if the result is a valid flag
for ct in tqdm(itertools.permutations(vect2)):
    print(ct)
    
