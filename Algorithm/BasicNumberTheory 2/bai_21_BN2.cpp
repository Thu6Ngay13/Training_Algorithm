#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll Modul = 1000000000+7;

ll modul_nphan(int a, int b)
{
	if(b == 0)
		return 1;
	ll x = modul_nphan(a, b/2)%Modul;
	if(b % 2 == 0)
		return (x*x)%Modul;
	else
		return ((x*x)%Modul*a)%Modul;
}

 
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int a, b, c; cin >> a >> b >> c;
		ll ans = modul_nphan(a, b);
		if(c == 0)
			cout << a << endl;
		else
		{
			for(int i = 1; i < c; i++)
				ans = modul_nphan(ans, b);
			cout << ans << endl;
		}
	}
	return 0;
}
