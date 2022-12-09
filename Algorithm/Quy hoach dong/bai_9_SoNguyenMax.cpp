#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

string S, T;
int dp[Max][Max];
void solve(){
	for(int i = 0; i < (int)S.size(); i++) {
		for(int j = 0; j < (int)T.size(); j++){
			if(S[i] == T[j]) dp[i+1][j+1] = dp[i][j] + 1;
			else dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
		}
	}
	cout << dp[S.size()][T.size()];
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> S >> T;
	solve();
	return 0;
}

