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
		int n, x; cin >> n >> x;
		int A[n];
		for(int i = 0; i < n; i++) cin >> A[i];
		int cnt = 0;
		int ma = A[0]-x;
		int mi = A[0]+x;
		for(int i = 1; i < n; i++){
			mi = min(mi, A[i]+x);
			ma = max(ma, A[i]-x);
			if(ma > mi){
				cnt++;
				mi = A[i]+x;
				ma = A[i]-x;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

