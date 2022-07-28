# https://stackoverflow.com/questions/5670287/cryptanalysis-xor-of-two-plaintext-files


# https://travisdazell.blogspot.com/2012/11/many-time-pad-attack-crib-drag.html
# https://github.com/Vishal-Kancharla/One-Time-Pad-Attack

import requests
from pwn import xor


flag_ct = b'YK\xcfO\x1d\x8c\xe9\x9cJ\xa3\x8a\\Wl\x8fI(l\x8e`\xf0\x96N\xc7\xb8\xa2\x90\xceE\xdc\x80\xbd'

# to get all ciphertexts
# sect = set()
# for i in range(100):
# 	r = requests.get("https://aes.cryptohack.org/stream_consciousness/encrypt")
# 	sect.add(r.json()["ciphertext"])

# print(sect,len(sect))


sect = {'594bcf4f1d8ce99c4aa38a5c576c8f49286c8e60f0964ec7b8a290ce45dc80bd', '7656c05a45c3e28516b8de09492684042376d86ce5c17e98aa89d6911c879be0ffdb06bac9afa285934941593703bd057f9554f47d6a3aadae89755e7e88cd953d18bf3f43319c12510cade78c092ee23b33baa1c3a9fa46cd5183d11d', '6e51c45a0cc3f09800a99f195031d54d19799135b5c9708fe49391da139ccca8f8c602ffdef1e7b78442185f394bb557', '6a5cc4570893e1d711bf9f03442c9b491e6dce70a185659ee8dd8288138182e0f6da15bac4aee78680530a10215af4183cc212bb5d2b3cace38d76457adccc8e375ffd7802319d181f6c', '7319c557088ffedb59939807497fd74b047b9d70b3c0638ff9959f9415c885a6b7dc14bac9b2a2978f171510204cb91373d75df86164', '6d51d74b4982b29918a9cb12052cd6411b729d61adcc62d6fd9c9f9406c884a1f39a', '6e51d31f1d86e08510b8d30e052bd34d19799d7cb685659eec89d68e1a8dccb0f6c705bacebca9c3951003556357bb043d9553ee7e6a30a1e3896d443f8ecb942e45bf', '6d51cf1f0d8cb28311bfc64b42309b4b193ecd74accb659fe39ad69b1c8ccca2e2dd1dfec4b3a0c4805c0d10374bb15627dc51fe35', '731edb1f1c8dfa9609aac64705169b40126dd867b3c0319ff9d1d68e1a8dcca6f6c11dee8aaee789885e041c6341a10273fc1bf62a3f3cb0a290694e3f9dc8977a42f9744336951a1461fbea87103be23738f0', '7b4a96560fc3dbd711bbdb4b4431c2040077ce7de5d17ed6ef98d6931cc898a8f29403f3cab5b3c5c1794153224df30272', '6d51d74b4982b29b16ae9f04437fcf4c1e70da66e5d17997f9dd82921786ccb3f2d11cffc9fdb38bc15d0410304cf41b32c74afe66263dadb0c078597bdcd1953b42e5700a2b95151d28f7a28a1d3da77a3fbbe2cfacf60ac04d95d6540c04bf845f2097622945c55e5c4538a7f45b166cb80266a4d6b396d62285f039df850eda64549305f7211016175036942d4bfe210e12ed959b7a8af9c032ca509e3b', '74569a1f20c4fe9b59bdd04b4c319b50183ef97aa9c968d6ec9392da068d80acb7dc14e88daeb396805906583703bb0327', '6e51d34c0cc3fa980ba9da18097fcf4c1e6d9d76a4d7639fec9a93da5fc884afe09438bac1b2a6908955415d3a50b11a359555f52a3e3ab1b0c07a566d8ecd9a3d53b13c43319c12086aa9e7c21d27ae7a35b7f29be1f15fdd03af9f400a0cb5811c2f9c60601784435d006cbbf91e0f24b00b60be98d4', '6d56c3530dc3dbd711bbc90e053dde481e7bcb70a185659ee893d68e1a8998e0de9412f5d8b1a3c4935500532b03a70330dd1cff6f3a26b0b0c076513f94d196335af870172c9b194e', '7e4bd34c1aceff9612b3d10c053ed5405753d479a9cc7f93ff84', '734d965c088db58359b8da4b5130c94a5771c861e9857383f9dd9f8e528b8daeb7d614bac4baa98b9355051e', '7319c557088ffed715b5cc0e053acd410567c97daccb76d6ec9392da1c8798e0f0d105bac5b4aac48351025b6d', '7256c11f1991fd821dfade05417fd345076ec435adc0369ae1dd949f529f84a5f99419ff8dbaa29092100c49634dbb023694', '7e56da5310c3e59e15b69f1f4d36d54f576ad574b18558d1e0dd9a9f139e85aef09410badeb8a48b8f5441583650b6173dd11cfa642e72acab816d176b94c1893f50fe630665bd571c38a8f6c20f3eb03f31a7a1c2a4b343c70392d756421aab825226d7', '7b57d21f20c3e19f18b6d34b4c38d54b057b9d7cb18b', '754cc40049b4fa8e59b5ca191a', '784cc21f20c3e59e15b69f184d30cc041f77d03b'}

lest = ['594bcf4f1d8ce99c4aa38a5c576c8f49286c8e60f0964ec7b8a290ce45dc80bd', '7656c05a45c3e28516b8de09492684042376d86ce5c17e98aa89d6911c879be0ffdb06bac9afa285934941593703bd057f9554f47d6a3aadae89755e7e88cd953d18bf3f43319c12510cade78c092ee23b33baa1c3a9fa46cd5183d11d', '6e51c45a0cc3f09800a99f195031d54d19799135b5c9708fe49391da139ccca8f8c602ffdef1e7b78442185f394bb557', '6a5cc4570893e1d711bf9f03442c9b491e6dce70a185659ee8dd8288138182e0f6da15bac4aee78680530a10215af4183cc212bb5d2b3cace38d76457adccc8e375ffd7802319d181f6c', '7319c557088ffedb59939807497fd74b047b9d70b3c0638ff9959f9415c885a6b7dc14bac9b2a2978f171510204cb91373d75df86164', '6d51d74b4982b29918a9cb12052cd6411b729d61adcc62d6fd9c9f9406c884a1f39a', '6e51d31f1d86e08510b8d30e052bd34d19799d7cb685659eec89d68e1a8dccb0f6c705bacebca9c3951003556357bb043d9553ee7e6a30a1e3896d443f8ecb942e45bf', '6d51cf1f0d8cb28311bfc64b42309b4b193ecd74accb659fe39ad69b1c8ccca2e2dd1dfec4b3a0c4805c0d10374bb15627dc51fe35', '731edb1f1c8dfa9609aac64705169b40126dd867b3c0319ff9d1d68e1a8dcca6f6c11dee8aaee789885e041c6341a10273fc1bf62a3f3cb0a290694e3f9dc8977a42f9744336951a1461fbea87103be23738f0', '7b4a96560fc3dbd711bbdb4b4431c2040077ce7de5d17ed6ef98d6931cc898a8f29403f3cab5b3c5c1794153224df30272', '6d51d74b4982b29b16ae9f04437fcf4c1e70da66e5d17997f9dd82921786ccb3f2d11cffc9fdb38bc15d0410304cf41b32c74afe66263dadb0c078597bdcd1953b42e5700a2b95151d28f7a28a1d3da77a3fbbe2cfacf60ac04d95d6540c04bf845f2097622945c55e5c4538a7f45b166cb80266a4d6b396d62285f039df850eda64549305f7211016175036942d4bfe210e12ed959b7a8af9c032ca509e3b', '74569a1f20c4fe9b59bdd04b4c319b50183ef97aa9c968d6ec9392da068d80acb7dc14e88daeb396805906583703bb0327', '6e51d34c0cc3fa980ba9da18097fcf4c1e6d9d76a4d7639fec9a93da5fc884afe09438bac1b2a6908955415d3a50b11a359555f52a3e3ab1b0c07a566d8ecd9a3d53b13c43319c12086aa9e7c21d27ae7a35b7f29be1f15fdd03af9f400a0cb5811c2f9c60601784435d006cbbf91e0f24b00b60be98d4', '6d56c3530dc3dbd711bbc90e053dde481e7bcb70a185659ee893d68e1a8998e0de9412f5d8b1a3c4935500532b03a70330dd1cff6f3a26b0b0c076513f94d196335af870172c9b194e', '7e4bd34c1aceff9612b3d10c053ed5405753d479a9cc7f93ff84', '734d965c088db58359b8da4b5130c94a5771c861e9857383f9dd9f8e528b8daeb7d614bac4baa98b9355051e', '7319c557088ffed715b5cc0e053acd410567c97daccb76d6ec9392da1c8798e0f0d105bac5b4aac48351025b6d', '7256c11f1991fd821dfade05417fd345076ec435adc0369ae1dd949f529f84a5f99419ff8dbaa29092100c49634dbb023694', '7e56da5310c3e59e15b69f1f4d36d54f576ad574b18558d1e0dd9a9f139e85aef09410badeb8a48b8f5441583650b6173dd11cfa642e72acab816d176b94c1893f50fe630665bd571c38a8f6c20f3eb03f31a7a1c2a4b343c70392d756421aab825226d7', '7b57d21f20c3e19f18b6d34b4c38d54b057b9d7cb18b', '754cc40049b4fa8e59b5ca191a', '784cc21f20c3e59e15b69f184d30cc041f77d03b']

flag = 'crypto{'
possible_keys = [xor(bytes.fromhex(val)[:7],b"crypto{") for val in lest]
possible_pts = [[xor(bytes.fromhex(val)[:7],key) for val in lest] for key in possible_keys]
# print(possible_pts)

key = possible_keys[0]

pts = [xor(bytes.fromhex(val)[:7],key) for val in lest]
print(pts)

key = xor(bytes.fromhex(lest[-1])[:11],b'But I will ')
pts = [xor(bytes.fromhex(val)[:11],key) for val in lest]
print(pts)

key = xor(bytes.fromhex(lest[1])[:14],b'Love, probably')
pts = [xor(bytes.fromhex(val)[:14],key) for val in lest]
print(pts)

key = xor(bytes.fromhex(lest[-1])[:16],b'But I will show ')
pts = [xor(bytes.fromhex(val)[:16],key) for val in lest]
print(pts)

key = xor(bytes.fromhex(lest[2])[:18],b'Three boys running')
pts = [xor(bytes.fromhex(val)[:18],key) for val in lest]
print(pts)

key = xor(bytes.fromhex(lest[13])[:22],b"Would I have believed ")
pts = [xor(bytes.fromhex(val)[:22],key) for val in lest]
print(pts)

key = xor(bytes.fromhex(lest[4])[:30],b"I shall, I'll lose everything ")
pts = [xor(bytes.fromhex(val)[:30],key) for val in lest]
print(pts)

key = xor(bytes.fromhex(lest[3])[:32],b"Perhaps he has missed the train ")
pts = [xor(bytes.fromhex(val)[:32],key) for val in lest]
print(pts)


''' [b'crypto{k3y57r34m_r3u53_15_f474l}', b"Love, probably? They don't know ", b'Three boys running, playing at h', b'Perhaps he has missed the train ', b"I shall, I'll lose everything if", b'What a nasty smell this paint ha', b'The terrible thing is that the p', b'Why do they go on painting and b', b"I'm unhappy, I deserve it, the f", b'As if I had any wish to be in th', b'What a lot of things that then s', b"No, I'll go in to Dolly and tell", b'These horses, this carriage - ho', b'Would I have believed then that ', b'Dress-making and Millinery\x88\xb1\xa1\xa4\xf6\x0e', b"It can't be torn out, but it can", b'I shall lose everything and not ', b"How proud and happy he'll be whe", b"Dolly will think that I'm leavin", b'And I shall ignore it.j\xa1_\xe2\xd69\x93w\xf4v', b'Our? Why our?*\xf7\xe0wW\t\xefK\xfc\xa4<\x94\xe7\x83\xb6\xb6\xe8\xa5t', b'But I will show him.\xbd\xe9\xd3\xe9\xad>\x13dg^s\xd8']
'''


# flag = crypto{k3y57r34m_r3u53_15_f474l}






