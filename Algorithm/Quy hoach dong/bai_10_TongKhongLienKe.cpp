#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1000005;
const int MOD = 1e9 + 7;

int n, A[Max], dp[Max];
void solve(){
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			dp[i+2] = max(dp[i] + A[i], dp[i+1]);
	cout << dp[n+1] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	for(int i = 0; i < n; i++) cin >> A[i];
	solve();
	return 0;
}

