#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1000005;
const int MOD = 1e9 + 7;

int n, m, A[Max], dp[Max];
void solve(){
	if(A[0]) dp[0] = 0;
	else dp[0] = A[1]+1 - (m /(A[1]+1))*(A[1]+1)%m;
	for(int i = 1; i < n-1; i++){
		if(!(A[i])) dp[i] = (dp[i-1] + 3) % MOD;
		else dp[i] = dp[i-1];
		dp[i] %= MOD;
	}
	if(A[n-1]) dp[n-1] = dp[n-2];
	else dp[n-1] = (dp[n-2] + A[n-2] + 1) % MOD;
	cout << dp[n-1] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> A[i];
	solve();
	return 0;
}

