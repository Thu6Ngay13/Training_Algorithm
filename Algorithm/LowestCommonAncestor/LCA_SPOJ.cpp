#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1000 + 5;

int t, n, q;
int h[N], up[N][11];
vector<int> g[N];

void dfs(int u){
	for(int v:g[u]){
		if(v == up[u][0]) continue;
		
		h[v] = h[u] + 1;
		up[v][0] = u;
		
		for(int j = 1; j < 11; j++)
			up[v][j] = up[up[v][j-1]][j-1];
		
		dfs(v);
	}
}

int lca(int u, int v){
	if(h[u] != h[v]){
		if(h[u] < h[v]) swap(u, v);
		
		int k = h[u] - h[v];
		for(int j = 0; (1 << j) <= k; j++)
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
	cin >> t;
	for(int tt = 1; tt <= t; tt++){
		cin >> n;
		for(int i = 1; i <= n; i++){
			g[i].clear();
			h[i] = 0;
			for(int j = 0; j < 11; j++)
				up[i][j] = 0;
		}
		for(int i = 1; i <= n; i++){
			int k; cin >> k;
			for(int j = 1, v; j <= k; j++){
				cin >> v;
				g[i].push_back(v);
				g[v].push_back(i);
			}
		}
		dfs(1);
		cin >> q;
		cout << "Case " << tt << ":" << endl;
		while(q--){
			int u, v; cin >> u >> v;
			cout << lca(u, v) << endl;
		}
	}
	return 0;
}

