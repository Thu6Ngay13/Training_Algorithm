#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1000001;
const int MOD = 1e9 + 7;

int n, x, a[Max];
ll dp[Max];
void solve(){
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for(int i = 1; i <= x; i++){
		for(int j = 0; j < n; j++)
			if(i >= a[j])
				dp[i] = (dp[i] + dp[i-a[j]])%MOD;
	}
	cout << dp[x] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> x;
	for(int i = 0; i < n; i++) cin >> a[i];
	solve();
	return 0;
}

