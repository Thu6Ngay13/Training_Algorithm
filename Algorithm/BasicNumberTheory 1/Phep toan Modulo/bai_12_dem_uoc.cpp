#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll dem_uoc(int n)
{
	ll kq = 1;
	for(int i = 2; i <= sqrt(n); i++)
	{
		int cnt = 0;
		if(n % i == 0)
			while(n % i == 0)
			{
				cnt++;
				n /= i;
			}
		kq = kq*1ll*(1+cnt);
	}
	if(n > 1)
		return kq*2;
	return kq;		
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << dem_uoc(n) << endl;
	}
	return 0;
}
