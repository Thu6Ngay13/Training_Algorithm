#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool kt_SNT(int n) 
{
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)	
			return false;
	return true;
}

ll demuoc(int n)
{
	ll dem = 1;
	for(int i = 2; i <= n; i++)
	{
		int cnt = 0;
		if(kt_SNT(i))
			for(int j = i; j <= n; j *= i)
				cnt += n/j;
		dem *= (ll)cnt+1;
	}
	return dem;	
			
}

int main()
{
	int n; cin >> n;
	cout << demuoc(n);
	return 0;
}
