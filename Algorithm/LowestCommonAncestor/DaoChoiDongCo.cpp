#include <bits/stdc++.h>
#include <fstream>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;

struct Edge{
	int v, w;
	Edge(int _v, int _w){
		v = _v;
		w = _w;
	}
};

int n, q;
int f[MAX], h[MAX], up[MAX][18];
vector<Edge> g[MAX];

void dfs(int u){
	for(Edge e : g[u]){
		int v = e.v, w = e.w;
		if(v == up[u][0]) continue;
		
		h[v] = h[u] + 1;
		f[v] = f[u] + w;
		
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
	
	int k = (int)log2(h[u]);
	for(int j = k; j >= 0; --j)
		if(up[u][j] != up[v][j])
			u = up[u][j], v = up[v][j];
	return up[u][0];
}



int dist(int u, int v){
	int p = lca(u, v);
	return f[u] + f[v] - 2*f[p];
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> q;
	for(int i = 1, u, v, w; i < n; i++){
		cin >> u >> v >> w;
        g[u].emplace_back(v, w);
        g[v].emplace_back(u, w);
	}
	dfs(1);
	while(q--){
		int u, v; cin >> u >> v;
		cout << dist(u, v) << endl;
	}
	return 0;
}

