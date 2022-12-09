#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll lcm(ll a, ll b)
{
	return a/__gcd(a,b)*b;
}

void osama(ll n)
{
	ll res;
	for(int i = 1; i <= sqrt(n); i++)
		if(n % i == 0 && lcm(i, n/i) == n)
			res = i;
	cout << res << " " << n/res << endl;
}

int main()
{
	ll n; cin >> n;
	osama(n);
}
