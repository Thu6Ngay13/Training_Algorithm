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
		int n, s; cin >> n >> s;
		int A[n];
		for(int i = 0; i < n; i++) cin >> A[i];
		int l = 0, r = 0, sum = 0, m = n, Ok = 0;
		while(r < n){
			while(sum <= s && r < n){
				sum += A[r];
				r++;
				if(sum == s){
					m = min(m, n-r+l);
					Ok = 1;
				}
			}
			while(sum > s){
				sum -= A[l];
				l++;
			}
		}
		if(Ok) cout << m << endl;
		else cout << -1 << endl;
	}
	return 0;
}

