#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool Fibo(ll n)
{
	if(n == 0 || n == 1)
		return true;
	ll fn1 = 1, fn2 = 0;
	for(int i = 3; i <= 93; i++)
	{
		ll fn = fn1 + fn2;
		if(fn == n)
			return true;
		fn2 = fn1;
		fn1 = fn;
	}
	return false;
}

int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
		ll n; cin >> n;
		cout << Fibo(n);
		cout << endl;
	}
	return 0;
}


