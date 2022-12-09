#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool nt(ll n);
bool kt_Fibo(ll n);
ll tong(ll n);

int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
		int dem = 0;
		ll l, r; cin >> l >> r;
		for(int i = l; i <= r; i++)
		{
			if(nt(i) && (kt_Fibo(tong(i))))
			{
				dem++;
				cout << i << " ";
			}
		}
		if(dem == 0)
			cout << -1;
		cout << endl;
	}
	return 0;
}

bool nt(ll n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) 
			return false;
	}
	return true;
}

bool kt_Fibo(ll n)
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

ll tong(ll n)
{
	ll sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
