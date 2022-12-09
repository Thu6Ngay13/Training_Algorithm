#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 3005;
const int MOD = 1e9 + 7;

string s, t, str = "";
int dp[MAX][MAX];

/*
AECECA
CEACEEC
*/

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> s >> t;
	int n = (int)s.size();
	int m = (int)t.size();
	s = '#' + s;
	t = '&' + t;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			if(s[i] == t[j]) dp[i][j] = dp[i-1][j-1] + 1;
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
	int maxdp = dp[n][m];
	int i = n;
	int j = m;
	while(i > 0 && j > 0 && maxdp){
		if(s[i] == t[j]){
			str = s[i] + str;
			i--; j--; maxdp--;
		}
		if(dp[i-1][j] > dp[i][j-1]) i--;
		else j--;
	}
	cout << str << endl;
	return 0;
}

