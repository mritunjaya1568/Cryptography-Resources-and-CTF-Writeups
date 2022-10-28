'''➜  luckyguess git:(main) ✗ nc be.ax 31800                  
a = 727137952154299156509181829192225116087091393203509679408847296379904636125639606311483979955162644839136679582026100963609221178951777778128194959677663638
b = 140127995298014756602226902645814290301508743932263756136717748190310086501482417697628191302790922834725822251755391786262263145130645011535025319875391801
enter your starting point: 1866154963474941479335939795159177070586532745136047390658073172326644928849622559964688291228790034003159283773771723851452543269189639133898138491116566829
alright, what's your guess? 1866154963474941479335939795159177070586532745136047390658073172326644928849622559964688291228790034003159283773771723851452543269189639133898138491116566829



wow, you are truly psychic! here, have a flag: corctf{r34l_psych1c5_d0nt_n33d_f1x3d_p01nt5_t0_tr1ck_th15_lcg!}
'''

''' In [1]: from random import getrandbits

In [2]: getrandbits(20)
Out[2]: 956618

In [3]: getrandbits(20)
Out[3]: 355745

In [4]: p = 2**521 - 1

In [5]: from Crypto.Util.number import *

In [6]: isPrime(p)
Out[6]: 1

In [7]: a = 72713795215429915650918182919222511608709139320350967940884729637990
   ...: 463612563960631148397995516264483913667958202610096360922117895177777812
   ...: 8194959677663638
   ...: b = 14012799529801475660222690264581429030150874393226375613671774819031
   ...: 008650148241769762819130279092283472582225175539178626226314513064501153
   ...: 5025319875391801

In [8]: bdash = (b * inverse(a-1,p) ) % p

In [9]: x = p - bdash

In [10]: x
Out[10]: 1866154963474941479335939795159177070586532745136047390658073172326644928849622559964688291228790034003159283773771723851452543269189639133898138491116566829
'''
