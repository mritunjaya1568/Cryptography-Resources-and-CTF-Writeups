x = 16158503035655503426113161923582139215996816729841729510388257123879913978158886398099119284865182008994209960822918533986492024494600106348146394391522057566608094710459034761239411826561975763233251722937911293380163746384471886598967490683174505277425790076708816190844068727460135370229854070720638780344789626637927699732624476246512446229279134683464388038627051524453190148083707025054101132463059634405171130015990728153311556498299145863647112326468089494225289395728401221863674961839497514512905495012562702779156196970731085339939466059770413224786385677222902726546438487688076765303358036256878804074494
string=bin(x)[2:]
count=0
for i in range(len(string)):
	if string[i]=='0':
		count+=1
print(count)