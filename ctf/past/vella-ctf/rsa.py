import gmpy2
from Crypto.Util.number import long_to_bytes
 
gmpy2.get_context().precision=2048

n=13876129555781460073002089038351520612247655754841714940325194761154811715694900213267064079029042442997358889794972854389557630367771777876508793474170741947269348292776484727853353467216624504502363412563718921205109890927597601496686803975210884730367005708579251258930365320553408690272909557812147058458101934416094961654819292033675534518433169541534918719715858981571188058387655828559632455020249603990658414972550914448303438265789951615868454921813881331283621117678174520240951067354671343645161030847894042795249824975975123293970250188757622530156083354425897120362794296499989540418235408089516991225649
e=3
ct=6581985633799906892057438125576915919729685289065773835188688336898671475090397283236146369846971577536055404744552000913009436345090659234890289251210725630126240983696894267667325908895755610921151796076651419491871249815427670907081328324660532079703528042745484899868019846050803531065674821086527587813490634542863407667629281865859168224431930971680966013847327545587494254199639534463557869211251870726331441006052480498353072578366929904335644501242811360758566122007864009155945266316460389696089058959764212987491632905588143831831973272715981653196928234595155023233235134284082645872266135170511490429493
m_or_x = gmpy2.root(ct, e)
x=15581107453382746363421172426030468550126181195076252322042322859748260918197659408344673747013982937921433767135271108413165955808652424700637809308565928462367274272294975755415573706749109706624868830430686443947948537923430882747239965780990192617072654390726447304728671150888061906213977961981340995242772304458476566590730032592047868074968609272272687908019911741096824092090512588043445300077973100189180460193467125092550001098696240395535375456357081981657552860000358049631730893603020057137233513015505547751597823505590900290756694837641762534009330797696018713622218806608741753325137365900124739257740
m_and_x=947571396785487533546146461810836349016633316292485079213681708490477178328756478620234135446017364353903883460574081324427546739724
sum_of=m_and_x%n+m_or_x%n
sum_of=sum_of-x%n+n
final_message=sum_of
print(final_message)
#print(long_to_bytes(final_message).decode())
ans=12171151658180173782583005650672572674369130314607177558608066662561362513192141018189454411044101948073284012454674600365949304926891131052379777639775555432171422313257993700291133227684139302379857994696751398462271243931764320246133642169431576843661357026432055213132059490218755474331841153642953121673431564373713356718908551475303200961897729810797149531411806222045552024684799069075819609962526107792155110444505418343890694517026257320432458476031997259748006511004827394593867282496773151045634928239522786603565139996181340929903066355231074164193429351102461501968371882194245903952441841716697297774372
print(long_to_bytes(ans))