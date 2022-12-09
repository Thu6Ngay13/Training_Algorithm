#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll rev(ll n)
{
	ll res = 0;
	while(n)
	{
		res = res*10 + n%10;
		n /= 10;
	}
	return res;
}

void lietke(ll n)
{
	int s2 = 0, s3 = 0, s5 = 0, s7 = 0;
	ll m = rev(n);
	while(n)
	{
		int r = n%10;
		if(r == 2)	
			s2++;
		else if(r == 3)
			s3++;
		else if(r == 5)
			s5++;
		else if(r == 7)
			s7++;
		n /= 10;
	}
	
	while(m)
	{
		int r = m % 10;
		if(r == 2 && s2 > 0)	
		{
			cout << 2 << " " << s2 << endl;
			s2 = 0;
		}
		else if(r == 3 && s3 > 0)
		{
			cout << 3 << " " << s3 << endl;
			s3 = 0;
		}
		else if(r == 5 && s5 > 0)
		{
			cout << 5 << " " << s5 << endl;
			s5 = 0;
		}
		else if(r == 7 && s7 > 0)
		{
			cout << 7 << " " << s7 << endl;
			s7 = 0;
		}
		m /= 10;
	}
}

int main()
{
	ll n; cin >> n;
	lietke(n);
	return 0;
}
