#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;

int f(int x, vector<pair<int, int>> v){
	int l = 0, r = v.size()-1;
	int res = -1;
	while(l <= r){
		int m = (l+r)/2;
		if(v[m].second < x){
			res = m;
			l = m+1; 
		}
		else r = m-1;
	}
	return res+1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int tt; cin >> tt;
	while(tt--){
		int n; cin >> n;
		ll sum = 0;
		vector<pair<int, int>> v;
		for(int i = 1; i <= n; i++){
			int x; cin >> x;
			if(x < i){
				v.push_back({x, i});
				sum += 1ll*f(x, v);
			}
		}
		cout << sum << endl;
	}
	return 0;
}

