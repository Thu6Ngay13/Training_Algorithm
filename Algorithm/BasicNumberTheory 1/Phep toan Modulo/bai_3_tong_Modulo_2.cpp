#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(int n, ll k) 
{
	int x = n/k;
	int r = n%k;
	ll tong1 = k*(k-1)/2;
	ll tong2 = r*(r+1)/2;
	int sum = x*tong1 + tong2;;
	if(sum == k)
		return 1; 
	return 0;
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
		cout << solve(n , k) << endl;
	}
	return 0;
}
