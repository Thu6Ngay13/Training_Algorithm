#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1005;
const int MOD = 1e9 + 7;

int n, A[Max], sum[Max];
void solve(){
	for(int i = 0; i < n; i++){
		sum[i] = A[i];
		for(int j = 0; j < i; j++){
			if(A[i] > A[j])
				sum[i] = max(sum[i], sum[j] + A[i]);
		}
	}
	cout << *max_element(sum, sum+n) << endl;
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

