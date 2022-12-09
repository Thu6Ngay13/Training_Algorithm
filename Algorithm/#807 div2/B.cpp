#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int tt; cin >> tt;
	while(tt--){
		int n; cin >> n;
		int A[n];
		ll B[n] = {0};
		for(int i = 0; i < n; i++) cin >> A[i];
		for(int i = 0; i < n-1; i++){
			B[i+1] = 0;
			B[i+1] = 1ll*B[i] + 1ll*A[i];
			B[i+1] += 1ll*(B[i] != 0 && A[i] == 0);
		}
		cout << B[n-1] << endl;
	}
	return 0;
}

