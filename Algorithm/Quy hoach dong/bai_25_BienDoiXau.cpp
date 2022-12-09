#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 105;
const int MOD = 1e9 + 7;

string A, B;
int dp[Max][Max];
void solve(){
//	dp[i][j] : i ki tu A thanh j ki tu B;
//	dp[i-1][j] : i - 1 ki tu A thanh j ki tu B, xoa ki tu A[i]
//	dp[i-1][j-1] : i - 1 ki tu A thanh j - 1 ki tu B, thay the A[i] = B[j];
//	dp[i][j-1] : i ki tu A thanh j - 1 ki tu B, them ki tu B[j] vao sau A[i];
	memset(dp, 0, sizeof(dp));
	for(int i = 0; i <= (int)A.size(); i++) dp[i][0] = i;
    for(int j = 0; j <= (int)B.size(); j++) dp[0][j] = j;
	for(int i = 0; i < (int)A.size(); i++){
		for(int j = 0; j < (int)B.size(); j++){
			if(A[i] == B[j]) dp[i+1][j+1] = dp[i][j];
			else dp[i+1][j+1] = min({dp[i][j+1], dp[i+1][j], dp[i][j]}) + 1;
		}
	}
	cout << dp[A.size()][B.size()] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> A >> B;
	solve();
	return 0;
}

