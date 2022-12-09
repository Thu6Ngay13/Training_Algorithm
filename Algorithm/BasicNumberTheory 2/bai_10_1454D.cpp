#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void check(ll n)
{
	ll m = n;
	ll max = 1;
	ll res = n;
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
		{
			int dem = 0;
			while(n % i == 0)
			{
				n /= i;
				dem++;
			}
			if(max < dem)
			{
				max = dem;
				res = i;
			}
		}
	ll tmp = 1;
	cout << max << endl;
	for(int i = 1; i  < max; i++)
	{
		cout << res << " ";
		tmp = tmp*res;
	}
	cout << m/tmp;
}

int main()
{
	
	int t; cin >> t;
	while(t--)
	{
		ll n; cin >> n;
		check(n);
		cout << endl;
	}
}
