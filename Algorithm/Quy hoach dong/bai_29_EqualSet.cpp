#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1300000;
const int MOD = 1e9 + 7;

int n, dp[Max];
void solve(){
	int s = n*(n+1)/2;
	if(s%2 || s == 0){
		cout << 0 << endl;
		return;
	}
	memset(dp, 0, sizeof(dp));
	s /= 2;
	dp[0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = s; j >= i; j--)
			if(dp[j-i]) dp[j] = (dp[j] + dp[j-i]) % MOD;
	}
	cout << dp[s]/2 << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	solve();
	return 0;
}

