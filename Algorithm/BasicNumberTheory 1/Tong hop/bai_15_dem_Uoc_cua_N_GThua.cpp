#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check_snt(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return false;
	return true;
}
ll DemUoc(int n)
{
	ll kq = 1;
	for(int i = 2; i <= n; i++)
	{
		int cnt = 0;
		if(check_snt(i))
			for(int j = i; j <= n; j *= i)	
				cnt += n/j;
		kq *= 1ll*(cnt+1);
	}
	return kq;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << DemUoc(n) << endl;
	}
	return 0;
}
