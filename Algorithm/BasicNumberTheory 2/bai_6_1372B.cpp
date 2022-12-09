//a+b == n
//
//lcm(a,b) = (a*b)/gcd(a,b)
//lcm(a,b) = min
//
//khi:
//	
//lcm(a,b) = a
//hoac
//lcm(a,b) = b
//
//a > b, a = kb, b + kb = n, b = n/(1+k), b = n/i; vay b <= n/2 1 ty
//hoac
//b > a, b = ka, a + ka = n, a = n/(1+k), a = n/i; vay a <= n/2 1 ty


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void lcm_ab(int n)
{
	
	int res = 1;
	for(int i = 1; i <= sqrt(n); i++)
		if(n % i == 0)
		{
			if(n/i > 1)
				res = max(res, i);
			if(i > 1) 
				res = max(res, n/i);
		}
	cout << res << " " << n - res;				
	
//	if(n % 2 == 0)
//	{
//		cout << n/2 << " " << n/2 << endl;
//		return;	
//	}
//	else
//	{
//		for(int i = 2; i <= sqrt(n); i++)
//			if(n % i == 0)
//			{
//				cout << n/i << " " << n-n/i << endl;
//				return;
//			}
//	}
//	cout << 1 << " " << n-1 << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n; cin >> n;
		lcm_ab(n);
		cout << endl;
	}
}
