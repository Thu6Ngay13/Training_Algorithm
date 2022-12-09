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
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			mp[x]++;
		}
		int x = 0, y = 0;
		for(auto it:mp){
			if(it.second % 2 == 0) y++;
			x += it.second % 2;
		}
		if(y > 1) x += y - y%2;
		cout << x << endl;
	}
	return 0;
}

