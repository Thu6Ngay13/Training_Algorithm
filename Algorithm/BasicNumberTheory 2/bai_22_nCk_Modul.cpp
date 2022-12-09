#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Modul = 1000000000+7;

//ll x, y, g;
//int extended_euclid(int a, int b) 
//{
//	if(b == 0)
//	{
//		x = 1;
//		y = 0;
//		g = a;
//	}
//	else
//	{
//		extended_euclid(b, a%b);
//		ll tmp = x;
//		x = y;
//		y = tmp - a/b*y;
//	}
//}
//
//ll rev_modul(int a, int m)
//{
//	extended_euclid(a, m);
//	return (x%m + m)%m;
//}

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

ll nCk_modul(int n, int k)
{
	ll ans = 1;
	for(int i = 1; i <= k; i++)
		ans = ((ans*(n-i+1)%Modul)*modul_nphan(i, Modul-2))%Modul;
	return ans;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		
		int n, k;
		cin >> n >> k;
		cout << nCk_modul(n, k);
		cout << endl;
	}
	return 0;
}
