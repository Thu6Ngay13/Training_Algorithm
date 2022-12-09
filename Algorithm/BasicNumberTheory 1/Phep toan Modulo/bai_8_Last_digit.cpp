//8^1 -> 8
//8^2 -> 4
//8^3 -> 2
//8^4 -> 6

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int nhiphan_lastdigit(int a, int b)
{
	if(b == 0)
		return 1;
	ll x = nhiphan_lastdigit(a, b/2);
	if(b % 2 == 0)
		return ((x%10)*(x%10))%10;
	else	
		return ((a%10)*(x%10)*(x%10))%10;
}

int last_digit(int n)
{
	int x = n % 4;
	if(x == 0)
		return 6;
	else if(n == 1)
		return 8;
	else if(n == 2)
		return 4;
	else
		return 2;
}
int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		cout << nhiphan_lastdigit(1378, n) << endl;
		cout << last_digit(n) << endl;
	}
	return 0;
}
