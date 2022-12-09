#include <bits/stdc++.h>
using namespace std;

int n, W, A[105], C[105];
long long dp[105][100005];

void solve(){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= W; j++){
			if(j >= A[i]) 
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-A[i]] + C[i]);
			else 
				dp[i][j] = dp[i-1][j];
		}
	}
	cout << dp[n][W] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> W;
	for(int i = 1; i <= n; i++) cin >> A[i] >> C[i];
	solve();
	return 0;
}

