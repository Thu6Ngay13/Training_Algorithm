#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 10000001;
const int MOD = 1e9 + 7;

int n, x, a[Max], dp[Max];
void solve(){
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for(int i = 0; i < n; i++){
		for(int j = 1; j <= x; j++){
			if(j >= a[i])
				dp[j] = (dp[j] + dp[j-a[i]])%MOD; // cong them so cach tao ra to tien [j-a[i]]
		}
	}
	cout << dp[x] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> x;
	for(int i = 0; i < n ; i++) cin >> a[i];
	solve();	
	return 0;
}

