#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, m; cin >> n >> m;
	ll A[n]; for(int i = 0; i < n; i++) cin >> A[i];
	ll B[n] = {0}, C[n] = {0};
	for(int i = 1; i < n; i++){
		if(A[i-1] > A[i]) B[i] = B[i-1] + (A[i-1]-A[i]);
		else B[i] = B[i-1];
	}
	for(int i = n-2; i >= 0; i--){
		if(A[i+1] > A[i]) C[i] = C[i+1] + (A[i+1]-A[i]);
		else C[i] = C[i+1];
	}
	while(m--){
		int i, j; cin >> i >> j;
		if(i < j) cout << (B[j-1] - B[i-1]) << endl;
		else cout << (C[j-1] - C[i-1]) << endl;
	}
	return 0;
}

