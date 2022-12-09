#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1005;
const int MOD = 1e9 + 7;

int n, A[Max], dp1[Max], dp2[Max];
void solve(){
	for(int i = 0; i < n; i++){
		dp1[i] = A[i];
		dp2[n-1-i] = A[n-1-i];
		for(int j = 0; j < i; j++){
			if(A[i] > A[j])
				dp1[i] = max(dp1[i], dp1[j] + A[i]);
			if(A[n-1-i] > A[n-1-j])
				dp2[n-1-i] = max(dp2[n-1-i], dp2[n-1-j] + A[n-1-i]);
		}
	}
	int ans = 0;
	for(int i = 0; i < n; i++)
		ans = max(dp1[i]+dp2[i]-A[i], ans);
	cout << ans << endl;
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

