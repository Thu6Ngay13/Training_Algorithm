#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 60005;

int n, A[205], S, dp[Max];

void solve(){
	memset(dp, 0, sizeof(dp));
	dp[0] = true;
	for(int i = 0; i < n; i++)
		for(int j = S; j >= A[i]; j--)
			if(dp[j - A[i]]) dp[j] = 1;
	cout << dp[S] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> S;
	for(int i = 0; i < n; i++) cin >> A[i];
	solve();
	return 0;
}

