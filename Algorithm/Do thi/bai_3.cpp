#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int n, m; cin >> n >> m;
	vector<int> v[1001];
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i = 1; i <= n; i++){
		sort(v[i].begin(), v[i].end());
		cout << i << " :";
		for(auto it:v[i])
			cout << " " << it;
		cout << endl;
	}
		
	return 0;
}

