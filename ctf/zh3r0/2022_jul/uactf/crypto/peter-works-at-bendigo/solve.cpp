#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
int getDigit(int number)
{
  if (number < 9)
    return number;
  return number / 10 + number % 10;
}
int getSize(int d)
{
  string num = to_string(d);
  return num.length();
}
int getPrefix(int number, int k)
{
  if (getSize(number) > k)
  {
    string num = to_string(number);
    return stol(num.substr(0, k));
  }
  return number;
}
bool prefixMatched(int number, int d)
{
  return getPrefix(number, getSize(d)) == d;
}
int sumOfDoubleEvenPlace(int number)
{
  int sum = 0;
  string num = to_string(number) ;
  for (int i = getSize(number) - 2; i >= 0; i -= 2)
    sum += getDigit( (num[i] - '0') * 2);
 
  return sum;
}
int sumOfOddPlace(int number)
{
  int sum = 0;
  string num = to_string(number) ;
  for (int i = getSize(number) - 1; i >= 0; i -= 2)
    sum += num[i] - '0';
  return sum;
}
bool isValid(int number)
{
  return (getSize(number) >= 13 &&
          getSize(number) <= 16) &&
    (prefixMatched(number, 4) ||
     prefixMatched(number, 5) ||
     prefixMatched(number, 37) ||
     prefixMatched(number, 6)) &&
    ((sumOfDoubleEvenPlace(number) +
      sumOfOddPlace(number)) % 10 == 0);
}
signed main()
{
	fastio
	int number = 5196081888500643;
	// XXXX XX66 8X12 5X57
	// 5192 4466 8X12 5X57
	// for(int a1 =0;a1< 10; a1++)
	// {
	// 	for(int a2=0;a2<10;a2 ++)
	// 	{
	// 		for(int a3=0;a3<10;a3++)
	// 		{
	// 			for(int a4 =0;a4<10;a4++)
	// 			{
	// 				for(int a5 =0 ;a5<10;a5++)
	// 				{
	// 					for(int a6 = 0;a6<10;a6++)
	// 					{
	// 						for(int a7=0;a7<10;a7++)
	// 						{
	// 							string num2 = "5" + to_string(a1) + to_string(a2) + to_string(a3) + to_string(a4) + to_string(a5) + "668" + to_string(a6) + "125" + to_string(a7) + "57";
	// 							int num3 = stol(num2);
	// 							cout << isValid(num3) << "\n";
	// 						}
	// 					}
	// 				}
	// 			}
	// 		}
	// 	}
	// }
		for(int a1 =0;a1< 10; a1++)
	{
		for(int a2=0;a2<10;a2 ++)
		{
			string num2 = "519244668" + to_string(a1) + "125" + to_string(a2) + "57";
			int num3 = stol(num2);
			if(isValid(num3))
			{
				cout << num3 << "\n";
			}
		}
	}
	// cout << isValid(number) << "\n";
}

// UACTF{5192446680125657}
// UACTF{5192446681125557}
// UACTF{5192446682125457}
// UACTF{5192446683125357}
// UACTF{5192446684125257}
// UACTF{5192446685125157}
// UACTF{5192446686125057}
//  flag = UACTF{5192446687125957}
// UACTF{5192446688125857}
// UACTF{5192446689125757}





// 5192446680125657
// 5192446681125557
// 5192446682125457
// 5192446683125357
// 5192446684125257
// 5192446685125157
// 5192446686125057
// 5192446687125957
// 5192446688125857
// 5192446689125757
