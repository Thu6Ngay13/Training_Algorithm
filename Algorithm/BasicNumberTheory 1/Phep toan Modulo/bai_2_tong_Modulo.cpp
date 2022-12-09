#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int tongmodulo(int n, ll k)
{
	int sum = 0;
	int tong = 0; 
	
	int x = n/k;
	int r = n%10;
	if(x)
	{
		tong = (1+r)*r/2;
		sum += tong + x*(1+(k-1))/2*(k-1);
	}	
	else
		for(int i = 1; i <= n; i++)
			sum += i;
	return sum;
}

int solve(int n, ll k) 
{
	int x = n/k;
	int r = n%k;
	ll tong1 = k*(k-1)/2;
	ll tong2 = r*(r+1)/2;
	return x*tong1 + tong2;
 }

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int n;
		ll k;
		cin >> n >> k;
		cout << tongmodulo(n, k) << endl;
		cout << solve(n , k) << endl;
	}
	return 0;
}
