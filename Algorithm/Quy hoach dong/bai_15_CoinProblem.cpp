#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 10000001;

int n, s, a[Max], dp[Max];
void solve(){
	dp[0] = 0;
	for(int i = 1; i <= s; i++){
		dp[i] = 1e9;
		for(int j = 0; j < n; j++){
			if(i >= a[j]) 
				dp[i] = min(dp[i], dp[i-a[j]]+1); //dp[i-a[j]] + 1 : +1 them 1 to tien nua
		}
	}
	if(dp[s] == 1e9) cout << -1 << endl;
	else cout << dp[s] << endl;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> s;
	for(int i = 0; i < n; i++) cin >> a[i];
	solve();
	return 0;
}

