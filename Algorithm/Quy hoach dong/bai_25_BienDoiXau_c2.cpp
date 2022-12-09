#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 105;
const int MOD = 1e9 + 7;

string a, b;
int dp[MAX][MAX];
void solve(){
	//dp[i][j] : bien i ki tu a thanh j ki tu b.
	memset(dp, 0, sizeof(dp));
	for(int i = 0; i <= (int)a.size(); i++) dp[i][0] = i;
	for(int j = 0; j <= (int)b.size(); j++) dp[0][j] = j;
	for(int i = 0; i < (int)a.size(); i++)
		for(int j = 0; j < (int)b.size(); j++){
			if(a[i] == b[j]) dp[i+1][j+1] = dp[i][j];
            else dp[i+1][j+1] = min({dp[i+1][j], dp[i][j+1], dp[i][j]}) + 1;
		}
	cout << dp[(int)a.size()][(int)b.size()];
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> a >> b;
	solve();
	return 0;
}

