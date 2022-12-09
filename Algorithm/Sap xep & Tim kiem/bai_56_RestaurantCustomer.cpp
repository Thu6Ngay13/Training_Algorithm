#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n; cin >> n;
	vector<pair<int, int>> vec;
	for(int i = 0; i < n; i++){
		int x, y; cin >> x >> y;
		vec.push_back({x, 1});
		vec.push_back({y, -1});
	}
	sort(vec.begin(), vec.end());
	int tmp = 0, ans = 0;
	for(int i = 0; i < 2*n; i++){
		tmp += vec[i].second;
		ans = max(ans, tmp);
	}
	cout << ans << endl;
	return 0;
}

