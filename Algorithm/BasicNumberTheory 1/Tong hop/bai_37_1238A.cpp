#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool kt(ll x, ll y)
{
	if(x - y == 1)
		return false;
	else
		return true;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		ll x, y; cin >> x >> y;
		if(kt(x, y))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

