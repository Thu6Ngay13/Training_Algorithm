#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t; cin >> t;
	while(t--){
		int n, q; cin >> n >> q;
		map<int, int> mp1;
		map<int, int> mp2;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			mp1[x] = max(mp1[x], i+1);
			if(mp2[x] != 0) mp2[x] = min(mp2[x], i+1);
			else mp2[x] = i+1;
		}
		while(q--){
			int a, b; cin >> a >> b;
			if(mp1[a] != 0 && mp1[b] != 0
			&& (mp2[a] <= mp1[b] || mp1[a] <= mp2[b])) 
				cout << "YES" << endl;
			else cout << "NO" << endl;
		}	
	}
	return 0;
}

