#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 100001;

//V la the tich cua cai tui
//n do vat
//A[i] = la the tich do vat thu i
//C[i] = gia tri do vat thu i
//dp : quy hoach -> bang phuong an
ll V, n, dp[Max][Max], A[Max], C[Max];

void solve(){
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= V; j++){
			if(j >= A[i]) dp[i][j] = max(dp[i-1][j], dp[i-1][j-A[i]] + C[i]);
			else dp[i][j] = dp[i-1][j];
		}
	}
	cout << dp[n][V] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> V;
	for(int i = 1; i <= n; i++) cin >> A[i];
	for(int i = 1; i <= n; i++) cin >> C[i];
	solve();
	
	return 0;
}

