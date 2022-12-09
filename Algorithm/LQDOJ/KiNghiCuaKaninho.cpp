#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 100005;
const int MOD = 1e9 + 7;

int n;
int A[MAX];
int x[MAX][4];
int dp[MAX][4];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	for(int i = 1; i <= n; i++) 
		for(int j = 1; j <= 3; j++)
			cin >> x[i][j];
	for(int i = 1; i <= n; i++) dp[1][i] = x[1][i];
	for(int i = 2; i <= n; i++){
		for(int j = 1; j <= 3; j++)
			for(int k = 1; k <= 3; k++)
				if(j != k) dp[i][j] = max(dp[i-1][k]+x[i][j], dp[i][j]);
				else dp[i][j] = max(dp[i-1][j], dp[i][j]);
	}
	cout << *max_element(dp[n]+1, dp[n] + 4) << endl;
	return 0;
}

