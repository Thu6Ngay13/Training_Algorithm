#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll pow1(int a, int b)
{
	if(b == 0)
		return 1;
	ll x = pow1(a, b/2);
	if(b % 2 != 0)
		return a*x*x;
	else
		return x*x; 
}

ll pow2(int a, int b)
{
	ll res = 1;
	while(b)
	{
		if(b % 2 != 0)
			res *= a;
		b /= 2;
		a *= a;
	}
	return res;
}

int main()
{
	int a, b; cin >> a >> b; 
	cout << pow1(a, b) << endl;
	return 0;
}
