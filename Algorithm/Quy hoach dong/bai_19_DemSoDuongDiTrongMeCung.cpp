#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;
const int MOD = 1e9 + 7;

int n, A[Max][Max], dp[Max][Max];
void solve(){
    if(!A[1][1]){
        cout << 0 << endl;
        return;
    }
    memset(dp, 0, sizeof(dp));
    dp[1][1] = 1;
    A[1][1] = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(A[i][j])
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
        }
    }
    cout << dp[n][n] << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            char c; cin >> c;
            if(c == '.') A[i][j] = 1;
            else A[i][j] = 0;
        }
    }
    solve();
    return 0;
}

