#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1000005;
const int MOD = 1e9 + 7;

int n;
int dp[MAX];
int max_digit(int n){
	int x = 0;
	while(n){
		x = max(n%10, x);
		n /= 10;
	}
	return x;
}
void solve(){
	dp[n] = 0;
	while(n){
		int tmp = n-max_digit(n);
		dp[tmp] = dp[n] + 1;
		n = tmp;
	}
	cout << dp[0] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	solve();
	return 0;
}

