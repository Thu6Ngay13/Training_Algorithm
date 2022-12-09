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
		int x; cin >> x;
		int A[2*n];
		for(int i = 0; i < 2*n; i++) cin >> A[i];
		sort(A, A+2*n);
		int i = 0, j = n;
		while(i < n && A[i] <= A[j]-x){
			i++; j++;
		}
		if(i == n) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

