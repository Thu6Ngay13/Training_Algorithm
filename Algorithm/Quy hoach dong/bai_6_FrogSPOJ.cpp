#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

int n, dp[Max];
void solve(){
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= 3; j++){
			if(i >= j)
				dp[i] += dp[i-j];
		}
	}
	cout << dp[n] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	solve();
	return 0;
}

