from Crypto.Util.number import *

k = '0x35818bb5f5d0239881b936495803b4cf1fdfe032df38554b7b390ebdeb74980801107890aeb6ba7156c9108f7607fc151c7b922416666c163a795feee5df5eff1afea12f5efe41210859f50e76a4d55bb804b5aba3e428db08c704dcc3ba5673bb07e8af0ef1b070ccc87f2ccea16ccc4b288eb4d19c656598cd78f5d8e29856093db2425984b186b65a7c124bae0d7503512d0429babada931f2218752e6c0d3f68e5bfc0d08e1aa3369037fd01795500a8318cd33743e3a82b4a59e6a690d15c9b17706e1809cef0eddaaad8328916e391f9b49186c1f25326aa0149cd856b435c31615a272d1dee4c605dd034294c78ea8c9bd935a5adbbad49f78dad5600'
c = '0x402c78559a350b06aafc83acdb46cd2ed498031d3ea049dea632e4fb55f566a520b699aa3c5b3631b31fc14c0ea6871ddbded3806ac2567b7ef8351491abe624fcd47257948f31313aff13ba1122af1db1cab398bd1ba47b763a17a81435d7c1544795e2eab347f8f36cb576bd1358aa22f4948ec88a0d4860ecced9cf7513286b9cbdca9ab64177a64120b7e488083552c8e794d1df04742446208d90e70e33d2912544caa2997e1776b27a60e50789c6e5257b4e055533f163edfe71063df65f7afbc6675d212f5456f2e1ed39777a611725f2db7894cdf21c108c9e3b972c004ec04ec88a23e7c5deae0bc3104a7aa5ea106c381affaf6dd715c665555d3'
c1 = '0x26fa28c50c33ae2050f9f3b07e0fa3fbc07f15ae250a053db9785a7b227940c067a0da4e0210eb3f63a1cc116a52ff93b43a60b2126aaf9f0c28e0b8e238877a91dfc4635ee3fe2cf7020ab56488e1cda0ac94b99b9944a866e55b9826121e7c9c59f5f77ee3875698f475120aed4cf84d254285c48fdfcf5eb6f9e56fa203e76c7b6900e9e05b5b5b3aa8205bc9b91d4938986520d7894d8bbeccf63e1adcf2b1294926934b966afcc14822a63ceba511f45027859a4b61d501e18035233e4ec4733a8e944fa48ee39a640df974849dda8466fa429c8a82cfe2e4fca127ae602bdb084ce715c8208646c0803b4351e8ca19b80e5b3fd07f79db7d80ba29c40a'
c2 = '0x26fa28c50c33ae2050f9f3b07e0fa3fbc07f15ae250a053db9785a7b222299197077e22ffb106412eacd246c87fbf31116bf55bb3096482f613040c553645eb7f4a8536bb688b15f30a250d1b648c05ec70badc143366ee7704965aee389517f8f1ee7d33324b6754d8b7a54af2f41f796f3b12afecd17f7e2a487d9af2d531fc6f1ef2c59445b01ea967438b04a68eb3346dda341d9cb3056810f247abc17c8a45e3c854115577802388a93c21c067b3ce5ab1d3524ce731b4e23f8cc12bbb72cc8a56cbf2b3f358dd446cb005c4cff102216b72e6c61ed590e9f065812ea9ce3355bf11f7acb8a3f84ae80a15274ad3779ddab3cea37d2eeabe824fe9fadc8'


k = int(k,16)
c = int(c,16)
c1 = int(c1,16)
c2 = int(c2,16)

print(k)
print(c)
print(c1)
print(c2)

msg=b'copper copper copper copper copper copper copper copper!'
print(msg, len(msg))

msg = int(msg.hex(),16)

k = k << 2
k += 3

# function to find the real n 
cnt = 0
while power_mod(msg,65537,k)!=c:
	print(cnt)
	cnt += 1
	k = k-1


n = k
print(n)

n = 27018046204288301076057926047344204505353252829984381965050954539974186296724141673936863891947871162798035322173963436622467945406195420759017839331561883848361120717249845753206072039769715959634133203455961163514317810317452730532304925163609984220730526713093680555882065406743403870940096629103367392623829911534587612102480165989692244079012428546227169615344200399086572686133242031233126542106007590483765696766152986663025394577442312674370266218451618218761644383394976993752002773554189530620888573426420144384166213099020036284107941926348554240101454417960184096925910281193441191713548460354557021813611

e = 3




flag = 3319902959063414239938171593252978571911411351491372149285826303842180989268617302927178223800451811802652019817490470308972273349240718249306974891645947748861026427742573231430825989823979953381268554169178951964098341393369269474920608052783639873963465158742587

# print(flag.to_bytes(flag.bit_length()//8 + 1,'big'))

'''b'inctf{b0b65d84386297336b20d650f2712da12055707a6bc69c02db12072d807854ba13e4c7b7efd0e8b1e6562f66c93428c5}\xb75\\\x91p\xd2;'
'''


