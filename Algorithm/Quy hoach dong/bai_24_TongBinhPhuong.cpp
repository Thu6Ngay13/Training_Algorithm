#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 10005;

int n, dp[Max];
void solve(){
	for(int i = 0; i <= n; i++){
		dp[i] = i;
		for(int j = 1; j <= sqrt(n); j++)
			if(i-j*j >= 0) 
				dp[i] = min(dp[i], dp[i-j*j] + 1);
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

