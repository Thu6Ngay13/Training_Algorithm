#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 200005;
const int MOD = 1e9 + 7;

int n, A[Max][3], dp[Max];
void solve(){
	int ans = 0; 
	memset(dp, 0, sizeof(dp));
	for(int i = 0; i < n; i++){
		dp[i] = A[i][2];
		for(int j = 0; j < i; j++){
			if(A[i][0] > A[j][1]){
				dp[i] = max(dp[i], dp[j] + A[i][2]);
			}
		}
		ans = max(ans, dp[i]);
	}
	cout << ans << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < 3; j++)
			cin >> A[i][j];
	solve();
	return 0;
}

