#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 100005;
const int MOD = 1e9 + 7;

int n, k, dp[Max];
void solve(){
	dp[0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= k; j++){
			if(i - j >= 0) dp[i] = (dp[i] + dp[i-j]) % MOD;
		}
	}
	cout << dp[n] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> k;
	solve();
	return 0;
}

