////1^n 1 2 3 4
////	1 1 1 1
	
////2^n 1 2 3 4
////	2 4 8 6
			
////3^n 1 2 3 4
////	3 9 7 1
	
////4^n 1 2 3 4
////	4 6 4 6

//=> quy luat chung mod: 4 == //1 	2  	3	  4 
//						 	 10 	20 	10	 14 => (1^n + 2^n + 3^n +4^n) = 10 20 20 14
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int mod_5(string c)
{
	int r;
	int tmp;
	if(c.size() == 1)
		r = c[0] - '0';
	else
		r = c[c.size()-1] - '0';
	if(r % 4 == 0)
		return 4%5;
	return 0;
}

int main()
{
	string c; cin >> c;
	cout <<  mod_5(c) << endl;
	return 0;
}
