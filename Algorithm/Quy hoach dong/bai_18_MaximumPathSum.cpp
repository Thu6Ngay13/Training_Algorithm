#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1005;

int m, n, A[Max][Max], dp[Max][Max];
int dx[3] = {-1, -1, 0};
int dy[3] = {0, -1, -1};
void solve(){
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			for(int k = 0; k < 3; k++)
				dp[i][j] = max(dp[i][j], dp[i+dy[k]][j+dx[k]] + A[i][j]);
		}
	}
	cout << dp[m][n] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> m >> n;
	for(int i = 1; i <= m; i++)
		for(int j = 1; j <= n; j++)
			cin >> A[i][j];
	solve();
	return 0;
}

