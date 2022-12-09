#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1005;
const int MOD = 1e9 + 7;

int n, A[Max], dp[Max];
void solve(){
	for(int i = 0; i < n; i++){
		dp[i] = 1;
		for(int j = 0; j < i; j++){
			if(A[i] > A[j]) 
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}
	cout << n - *max_element(dp, dp+n) << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	for(int i = 0; i < n; i++) cin >> A[i];
	solve();
	return 0;
}

