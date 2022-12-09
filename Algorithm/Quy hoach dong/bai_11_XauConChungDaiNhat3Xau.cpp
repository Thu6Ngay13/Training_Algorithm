#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 101;

string X, Y, Z;
int dp[Max][Max][Max];
void solve(){
	for(int i = 0; i < (int)X.size(); i++) {
		for(int j = 0; j < (int)Y.size(); j++){
			for(int k = 0; k < (int)Z.size(); k++){
				if(X[i] == Y[j] && Y[j] == Z[k]) dp[i+1][j+1][k+1] = dp[i][j][k] + 1;
				else dp[i+1][j+1][k+1] = max(dp[i+1][j+1][k], max(dp[i][j+1][k+1], dp[i+1][j][k+1]));
			}
		}
	}
	cout << dp[X.size()][Y.size()][Z.size()];
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> X >> Y >> Z;
	solve();
	return 0;
}

