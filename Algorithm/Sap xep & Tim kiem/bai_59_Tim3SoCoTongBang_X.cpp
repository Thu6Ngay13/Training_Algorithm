#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n, x; cin >> n >> x;
	vector<pair<int, int>> vec;
	for(int i = 0; i < n;  i++){
		int tmp; cin >> tmp;
		vec.push_back({tmp, i});
	}
	sort(vec.begin(), vec.end());
	bool ok = true;
	for(int i = 0; i < n-2 && ok; i++){
		int l = i+1, r = n-1;
		while(l < r && ok){
			if(vec[l].first + vec[r].first + vec[i].first == x){
				ok = false;
				cout << vec[i].second + 1 << " " << vec[l].second + 1 << " " << vec[r].second + 1 << endl;
			}
			else if(vec[l].first + vec[r].first + vec[i].first < x)
				l++;
			else
				r--;
		}
	}
	if(ok)
		cout << "IMPOSSIBLE" << endl;
	return 0;
}

