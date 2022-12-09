#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> v[1001];
bool no[1001];
set<int> se;
void DFS(int a){
	no[a] = false;
	se.insert(a);
	for(auto it:v[a]){
		if(no[it]){
			no[it] = false;
			DFS(it);
		}
	}
}

int main(){
	memset(no, true, sizeof(no));
	int m, n; cin >> m >> n;
	vector<set<int>> vs;
	for(int i = 0; i < n; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i = 0; i < m; i++){
		if(no[i]){
			DFS(i);
			vs.push_back(se);
			se.clear();
		}
	}
	int t; cin >> t;
	while(t--){
		int x, y, ok = -1; cin >> x >> y;
		for(auto it:vs){
			if(it.count(x) && it.count(y))
				ok = 1;
		}
		cout << ok << endl;
	}
	return 0;
}

