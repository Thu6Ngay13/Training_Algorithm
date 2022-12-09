#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;


int n;
int h[N], up[N][18];
vector<int> g[N];

void dfs(int u){
	for(int v : g[u]){
		if(v == up[u][0]) continue;
		
		h[v] = h[u] + 1;
		up[v][0] = u;
		
		for(int j = 1; j < 18; ++j)
			up[v][j] = up[up[v][j-1]][j-1];
		
		dfs(v);
	}
}

int lca(int u, int v){
	if(h[u] != h[v]){
		if(h[u] < h[v]) swap(u, v);
		
		int k = h[u] - h[v];
		for(int j = 0; (1 << j) <= k; ++j)
			if(k >> j & 1)
				u = up[u][j];
	}
	
	if(u == v) return u;
	
	int k = __lg(h[u]);
	for(int j = k; j >= 0; --j)
		if(up[u][j] != up[v][j])
			u = up[u][j], v = up[v][j];
	return up[u][0];
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	while(cin >> n, n){
		for(int i = 1; i <= n; i++) g[i].clear();
		for(int i = 1, u, v; i < n; i++){
			cin >> u >> v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		
		dfs(1);
		int m, root = 1; cin >> m;
		while(m--){
			char c; cin >> c;
			if(c == '!') cin >> root;
			else{
				int u, v; cin >> u >> v;
				cout << (lca(u, v) ^ lca(u, root) ^ lca(v, root)) << endl;
			}
		}
	}
	return 0;
}
