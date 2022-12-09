#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
	int n;
	cin >> n;
	int sum = n*(n+1)/2;
	if(sum % 2)
		cout << "-1" << endl;
	else
	{
		sum /= 2;
		ll dp[n+1][sum+1];
		memset(dp, 0, sizeof(dp));
		dp[0][0] = 1;
		for(int i = 1; i < n; i++)
			for(int j = 0; j <= sum; j++)	
			{
				dp[i][j] = dp[i-1][j];
				int remain = j - i;
				if(remain >= 0)
					dp[i][j] += dp[i-1][remain];
			}
		cout << dp[n-1][sum] << endl;
	}
	
	return 0;
}
