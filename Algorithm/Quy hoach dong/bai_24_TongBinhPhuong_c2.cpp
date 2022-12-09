#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 10005;
const int MOD = 1e9 + 7;

int n;
int dp[MAX];
void solve(){
	for(int i = 0; i <= n; i++){
		dp[i] = i;
		for(int j = 1; j <= sqrt(i); j++)
			if(dp[i-j*j] || !(i-j*j)) dp[i] = min(dp[i], dp[i-j*j] + 1);
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

