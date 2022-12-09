#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> v[1001];
bool no[1001];
int parent[1001];

void DFS(int a){
	no[a] = false;
	sort(v[a].begin(), v[a].end());
	for(auto it:v[a])
		if(no[it]){
			parent[it] = a;
			DFS(it);
		}
}

int main(){
	memset(no, true, sizeof(no));
	int m, n, s, e; cin >> m >> n >> s >> e;
	for(int i = 0; i < n; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
	}
	DFS(s);
	parent[s] = -1;
	if(no[e])
		cout << -1 << endl;
	else{
		vector<int> ans;
		while(e != parent[s]){
			ans.push_back(e);
			e = parent[e];
		}
		reverse(ans.begin(), ans.end());
		for(auto it:ans) cout << it << " ";
		cout << endl;
	}
	return 0;
}

