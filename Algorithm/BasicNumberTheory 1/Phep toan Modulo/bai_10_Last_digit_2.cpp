#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int a_Mu_b(int a, int b)
{
	int mod_4 = b % 4;
	if(a == 5)
		return 5;
	else if(a == 1)
		return 1;
		
	a %= 10;
	switch (mod_4)
	{
		case 1:
			return a;
		case 2:
			switch (a)
			{
				case 4:
				case 6:
					return 6;
				case 3:
				case 7:
					return 9;
				case 2:
				case 8:
					return 4;
				case 9:
					return 1;
			}
		case 3:
			switch (a)
			{
				case 2:
					return 8;
				case 3:
					return 7;
				case 4:
					return 4;
				case 6:
					return 6;
				case 7:
					return 3;
				case 8:
					return 2;
				case 9:
					return 9;
			}
		case 0:
			switch (a)
			{
				case 4:
				case 6:
					return 6;
				case 3:
				case 7:
					return 1;
				case 2:
				case 8:
					return 6;
				case 9:
					return 1;
			}
	}
}


int main()
{
	int a, b; cin >> a >> b; 
	cout <<  a_Mu_b(a, b) << endl;
	return 0;
}
