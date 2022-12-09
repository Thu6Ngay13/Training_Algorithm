#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll pow_(int a, int b, ll p)
{
	if(b == 0)
		return 1;
	ll x = pow_(a, b/2, p);
	if(b % 2 == 0)
		return ((x%p)*(x%p))%p;
	else
		return ((x%p)*(x%p)*a%p)%p;
}

ll powmod(int x, int y, ll p)
{
	ll c = x % p;
	return pow_(c, y, p);
}



int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int x, y;
		ll p;
		cin >> x >> y >> p;
		cout << powmod(x, y, p) << endl;
	}
	return 0;
}
