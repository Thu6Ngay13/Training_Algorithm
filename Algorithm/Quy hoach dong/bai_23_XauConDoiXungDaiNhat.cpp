#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1005;

string S;
int dp[Max][Max];
void solve(){
	int m = 1;
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i < (int)S.size(); i++) dp[i][i] = 1;
	for(int i = 1; i < (int)S.size()-1; i++) dp[i][i+1] = 2*(S[i] == S[i+1]);
    for(int i = 2; i < (int)S.size(); i++)
        for(int j = 1; j < (int)S.size()-i; j++)
        	if(S[j] == S[j+i] && dp[j+1][j+i-1])
        		dp[j][j+i] = i+1;
    for(int i = 1; i < (int)S.size(); i++)
    	for(int j = 1; j < (int)S.size(); j++)
    		m = max(m, dp[i][j]);
    cout << m << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> S;
    S = "#" + S;
    solve();
    return 0;
}

