#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n, x; cin >> n >> x;
	vector<pair<int, int>> vec;
	for(int i = 0; i<  n; i++){
		int tmp; cin >> tmp;
		vec.push_back({tmp, i});
	}
	sort(vec.begin(), vec.end());
	bool ok = true;
	int l = 0, r = n-1;
	while(l < r && ok){
		if(vec[l].first + vec[r].first == x){
			cout << vec[l].second + 1 << " " << vec[r].second + 1<< endl;
			ok = false;
		}
		else if(vec[l].first + vec[r].first > x) r--;
		else l++;
	}
	if(ok)
		cout << "IMPOSSIBLE" << endl;
	return 0;
}

