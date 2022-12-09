#include <bits/stdc++.h>
using namespace std;
const int Max = 100000;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, maa = -1e9-5, mib = 1e9+5;
		cin >> n >> m;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			maa = max(maa, x);
		}
		for(int i = 0; i < m; i++){
			int x; cin >> x;
			mib = min(mib, x);
		}
		cout << maa*mib << endl;
	}
	return 0;
}
