#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 10000001;
int n, A[Max], sum = 0;
int dp[Max];
void solve(){
    memset(dp, 0, sizeof(dp));
    dp[0] = -1;
    for(int i = 0; i < n; i++){
        for(int j = sum; j >= A[i]; j--){
            if(A[i] && dp[j-A[i]] && dp[j-A[i]] < A[i]){
            	if(dp[j]) dp[j] = min(dp[j], A[i]);
				else dp[j] = A[i];
			}
        }
    }
    for(int i = sum; i >= 0; i--)
        if(dp[i]){
            cout << i << endl;
            break;
        }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
        sum += A[i];
    }
    solve();
    return 0;
}

