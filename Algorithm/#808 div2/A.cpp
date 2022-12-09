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
		int ok = 1;
		for(int i = 0; i < n; i++) cin >> A[i];
		for(int i = 1; i < n-1; i++)
			if(A[i]-A[i-1] > A[i+1]-A[i])
				ok = 0;
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

