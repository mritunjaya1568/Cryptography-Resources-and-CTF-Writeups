from Crypto.Util.number import *
from tqdm import tqdm
from itertools import product
from z3 import *

ct = [(85, 2009755672435753240933297922620729942110285100089234834611189610638944428122270966606450209287004686147490741726074233399923807772025455384), (87, 4996607263053501712119670315411210635641476911112656716346186101581162098939506206462698692878856867719374177604968008598982986859155008123), (87, 4837953870616520482139098354277306810171956043791834010204071803405678054968703256907153189059041329376000508442178425613919361101370091597), (87, 2933251583165904105425041103443198171501175581919361545836839336222902826332690613281372817019459906816365925875888304559050438360535693754), (87, 3687643521316276110350069295074808763624177150637370283489602776297956670406673088896906135313859622547057266461156951352840606158133939326), (85, 1338269001646504891852362627714857562957599731250242281507737655117481275381522940187354460968741738873145343823622277547003496172474140929), (88, 7933296831307546148859657742504382496951023270916400508699917815337497611045057441275885597739792345698682705664067022591023419704320903682), (88, 5551940689407978486506000896917506389553250109195458521661213619690861850998613004330276887098156130761269810440548744569924180624922795113), (84, 4231118499738387243085586897653540321361890016337481573279774741827125072054069869204040621495890626440611926639348835434382399384680055422), (85, 4704615409370307656606356674605132679559694819773906599372238093928995241862651680281288235856744305731307534075261385839804274777809615349), (88, 8080256207998531514821351856269697662773084407605094205301308544428843939544685672982309353297946702140050231399104513874885470725033197665), (88, 5409126049900711181553897969759692389994841569000620092514718715454021797905578507700126871105210241868943216288008246115824215988452628610), (87, 9252119153621946581189075112355267174890952393437560488066048810424246555795717704306898381332924931192879341998003358581626937969846419514), (88, 4309485343027874993328683769447337855319861832898927390313412221773647599911173732334028315977555272520439642698050646195173212678056296824), (87, 7585821393024154059281324167310518147335428246416250953866063679865301977430635054486170591035445789330984486529581273451159109931487791502), (87, 4266559781861060657731014334455291598689251074723949797856286897802219958857948301662899795696748957745131495362941575798432727634477829169), (85, 2641970821454174926450206596995181582610648509828849026215891906920020076919398240347027542452996819530972432115175678566086129470049375389), (86, 3077438307667140950446795937461054813957511252383671895612002141778156796698300700433893422617209993376314581927862590976739430303756825799), (84, 6606999799754153651147831000154190219518207430742825676139927743071667153908159445512098245423654757585044526053832363134210629951000894424), (88, 5670578370066772514741437284311647297873639929831922637574590430528630079731096253156055423807240883352926044290617794045498770071653673648), (87, 6894132144232319468740512750496837680809983881874187255032194645685827169634783788480774942267705885439820208999500465383743432841886297780), (88, 6348559834296411797469331328911826454137045759724408730535584371919321718963812479226912064993936288733920150791627489465935504738729746712), (87, 7457067309408071136462520290099813600595760616382451252266638576757556195357758384430233685566475045370258747830063483558129016033041534121), (87, 7138834056650788599340304091245357448689914704543367476875970477848587821892811763578094466693024724929034161719556439516286550418480386826), (85, 4214620981374285095640824086913124961419729602098347661701803957979165936606167686524401563099707189265200486482516005732059773306234258420), (87, 7739066385937951930229094506964291860284170243142110190122036300802992602806430896564185899709833543891933679072444463084661529668059219104), (86, 7996763147644153267931052506581385268378745125996592054161290689392831593366496210631236238142447646254463386914159791951904746842709666621), (83, 2363927368088545362888027832425184786062409622322321649991521010872009124933023792724085312213031828468440431258319304817389205319949123017), (86, 8952178949693065428977346330331508030115172989418887909205463101008773555390353195154597245789628940426095401145185560848927781578325104633), (87, 5437733249052136209105079687557091961563919494484950700755430118355692330802405578709308644911805929080699188377572804834481019970451287210), (88, 6015299972513982077146707497576267202666793107003902152334693697774096888512046451228148219477544391600946101222260160929679756603685952858), (88, 4568852671731251436040898868989551602956632306950375030804513367391992286782270552341135397170272362552944089560054885656717064705695931608), (88, 5214418374014497232007521802148945843762329611158152570151078790657020448385624421117820553224634987052518291618670107521494031262847423514), (85, 4868781049816097655711690233312446779184038900364456479177916582789767967134191139603006712483609665048365174590374678749717762853252392898), (87, 7487878378499555558388350908281092245535427011554302229088273963701472371659945154073798520163320208196872977374676841353329741664704431049), (88, 4804650300297155317595282760599161747288241275410480931480258003053935686370721999717184367371623277273540661128542000775004283694728585525), (87, 6324353155591926121419512579497192374524354396151314193997508188259969434627055717937503525281909856550845807173753553651932260148517039625), (87, 5546469224661430242652418747991106002905180051710879985326544434722895447041925331360634907813012794515907098935485171653197695779005009826), (86, 6493922061250196900387871627336695511599800586007321943800903718034500613505566204881495072235610494479661303981584755703237874004730700241), (84, 3304267236247240014753455621608696126482869339445549240138779235284450054938719633292333925332195771054789798560540593262065547955691287860), (86, 7470707627092056238764393981318045721888042683539521453158125764519328859948265999477619788387120366063077899885955739104933799243393828710), (88, 6674831873895816998217860257081780104168741154329195649911902365299495130324698497916172758145782383658122037059537201009889153133307754158), (88, 5323014117483698150842190422231005724805137799598831691161862346623039247622359972881775361362745899238680458901399065283489317592046388919), (85, 3763698408921732607951773848228884704668238062686979349129116312470621538052054791662510364394420612090312977770614743449723324784458538150)]
r = 439336960671443073145803863477
# assert len(FLAG) == 44
flag_len = 44
FLAG_FORMAT = "bi0sctf{"
NBITS = flag_len<<2 # 44*4 = 176 
a = 0xBAD2C0DE # 3134374110
c = 0x6969 # 0x6969
m = 1<<NBITS # m = 2^176
public = [1]
for i in range(2, 91):
    public.append(public[-1]*i)
q = sum(public)
B = [r*i % q for i in public]
B.reverse()
ciphertext = []

def decrypt(blen,output):
	dect = list(product([0,1],repeat=17))
	for index in range(len(dect)):
		out,lest = output,list(dect[index])[:]
		out -= sum([a*b for a,b in zip(lest,B[:17])])
		for i in range(17,90):
			if out > sum(B[i+1:]):
				out -= B[i]
				lest.append(1)
			else:
				lest.append(0)
		if out == 0:
			ciphertext.append(int(''.join(str(i) for i in lest[90-blen:][::-1]),2))
			return

print("[+] Collecting ciphertext:")
for i in tqdm(range(len(ct))):
	decrypt(ct[i][0],ct[i][1])

assert len(ciphertext) == len(ct)


seed = BitVec("seed",200)
state = seed
s = Solver()

print("[+] Collecting Seed:")
for i,f in enumerate(FLAG_FORMAT):
	state = (state*a+c)%m
	s.add((state>>88)^i^ord(f) == ciphertext[i])

if s.check() == sat:
	model = s.model()
	rec_seed = model[model.decls()[0]].as_long()
	print(f"[+] Recovered seed:{int(rec_seed)%m}")
else:
	print("[-] Got nothing in z3")

pt = []
state = int(rec_seed)
for i,f in enumerate(ciphertext):
	state = (state*a+c)%m
	pt.append(f^i^(state>>88))

flag = "".join(chr(i) for i in pt)
print("[+] Got the flag:",flag)
''' bi0sctf{lcg_is_good_until_you_break_them_!!}'''