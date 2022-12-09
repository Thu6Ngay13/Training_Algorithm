#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n; cin >> n;
	int A[n+2]; for(int i = 1; i <= n; i++) cin >> A[i];
	int dp[n+2]; dp[1] = 1;
	for(int i = 2; i <= n; i++){
		dp[i] = 1;
		for(int j = 1; j < i; j++){
			if(A[i] > A[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}
	cout << *max_element(dp+1, dp+n+1) << endl;
	return 0;
}

