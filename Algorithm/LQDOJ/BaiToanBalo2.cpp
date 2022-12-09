#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, W;
int w[105], v[105], dp[105][100005];

void solve(){
	int top = 0;
	for(int i = 1; i <= n; i++) top = max(top, v[i]*n);
	for(int i = 1; i <= top; i++) dp[0][i] = (int)(1e9)+5;
	for(int i = 1; i <= n; i++)
		for(int j = 0; j <= top; j++)
			if(j < v[i]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = min(dp[i-1][j], dp[i-1][j-v[i]] + w[i]);
	int ans = 0;
	for(int i = 0; i <= top; i++)
		if(dp[n][i] <= W) ans = max(ans, i);
	cout << ans << endl;
}

int main(){
	cin >> n >> W;
	for(int i = 1; i <= n; i++) cin >> w[i] >> v[i];
	solve();
	return 0;
}

