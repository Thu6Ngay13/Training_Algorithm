#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int n, m;
int dp[15][1005];

void solve(){
	pair<int, int> pi[2];
	pi[0] = make_pair(1, 2);
	pi[1] = make_pair(2, 1);
	memset(dp, 0, sizeof(dp));
	dp[0][0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			for(auto it:pi){
				int I = i - it.first;
				int J = j - it.second;
				if(I >= 0 && J >= 0){
					dp[i][j] = (dp[i][j] + dp[I][J]) % MOD;
				}
			}
		}
	}
	cout << dp[n][m] << endl;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m;
	solve();
	return 0;
}

