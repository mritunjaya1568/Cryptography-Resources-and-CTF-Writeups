# kqiaprcvsbmwynzjghxudftleo+
# dk+hjpegrhomfgjozzshxqcojnkcozsrfgbnjviubevbuxrrpzdfkjmd+vrwiegqh+ocydjoinlpehrgdnjcvbdacsodjelhvxjmsfzqedvfdbulsoxctne+cagjiovlwlphergkw



string1 = ['k','q','i','a','p','r','c','v','s','b','m','w','y','n','z','j','g','h','x','u','d','f','t','l','e','o','+']
string2 = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','+']

dest = dict(zip(string1,string2))
print(dest)

string = "dk+hjpegrhomfgjozzshxqcojnkcozsrfgbnjviubevbuxrrpzdfkjmd+vrwiegqh+ocydjoinlpehrgdnjcvbdacsodjelhvxjmsfzqedvfdbulsoxctne+cagjiovlwlphergkw"
string3= ""
for i in range(len(string)):
	string3+=dest[string[i]]
print(string3)

print(len(string))




