#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 10005;

int n, A[Max], dp[Max], sum = 0, cnt = 0;
void solve(){
	memset(dp, false, sizeof(dp));
	dp[0] = true;
	for(int i = 0; i < n; i++){
		for(int j = sum; j >= A[i]; j--)
			if(dp[j - A[i]])
				dp[j] = true;
	}
	for(int i = 0; i <= sum; i++)
		if(dp[i]) cout << i << " ";
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

