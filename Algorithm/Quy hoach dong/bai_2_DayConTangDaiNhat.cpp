#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

int n, a[Max], dp[Max];
void solve(){
    int ans = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++)
            if(a[i] > a[j]){
                dp[i] = max(dp[i], dp[j]+1);
                ans = max(ans, dp[i]);
            }
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        dp[i] = 1;
    }
    solve();
    return 0;
}

