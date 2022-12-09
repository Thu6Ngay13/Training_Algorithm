#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 25005;
const int nArr = 105;

int n, W[nArr], C, dp[Max];
void solve(){
	memset(dp, 0, sizeof(dp));
	dp[0] = true;
	for(int i = 0; i < n; i++){
		for(int j = C; j >= W[i]; j--){
			if(dp[j-W[i]]) dp[j] = true;
		}
	}
	for(int i = C; i >= 0; i--){
		if(dp[i]){
			cout << i << endl;
			break;
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> C >> n;
	for(int i = 0; i < n; i++) cin >> W[i];
	solve();
	return 0;
}

