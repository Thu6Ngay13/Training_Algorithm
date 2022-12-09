#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 100005;
const int MOD = 1e9 + 7;

int n;
int A[MAX], dp[MAX];


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> A[i];
	dp[2] = abs(A[2]-A[1]);
	for(int i = 3; i <= n; i++)
		dp[i] = min(dp[i-1]+abs(A[i]-A[i-1]), dp[i-2]+abs(A[i]-A[i-2]));
	cout << dp[n] << endl;
	return 0;
}

