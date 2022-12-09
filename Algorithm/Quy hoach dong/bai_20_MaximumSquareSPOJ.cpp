#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 505;
const int MOD = 1e9 + 7;

//8 6
//0   0   1   0   1   1
//0   1   1   1   0   0
//0   0   1   1   1   1
//1   1   0   1   1   1
//1   1   1   1   1   1
//1   1   0   1   1   1
//1   0   1   1   1   1
//1   1   1   0   1   1

int n, m, A[Max][Max], dp[Max][Max];
void solve(){
	int ans = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(A[i][j]){
				dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
            	ans = max(ans, dp[i][j]);
			}
        }
    }
    cout << ans << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m;
	memset(A, 0, sizeof(A));
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin >> A[i][j];
	solve();
	return 0;
}

