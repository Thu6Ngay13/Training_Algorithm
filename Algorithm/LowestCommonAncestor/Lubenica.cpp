#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 100000 + 5;

struct Edge{
	int v, w;	
};

int n, k;
int h[N], up[N][18];
ll f[N];
vector<Edge> g[N];

void dfs(int u){
	for(Edge e:g[u]){
		int v = e.v, w = e.w;
		if(v == up[u][0]) continue;
		
		h[v] = h[u] + 1;
		f[v] = f[v] + w;
		up[v][0] = 0;
		
		for(int j = 1; j < 18; j++)
			up[v][j] = up[up[v][j-1]][j-1];
		
		dfs(v);
	}
}

int lca(int u, int v){
	if(h[u] != h[v]){
		if(h[u] < h[v]) swap(u, v);
		
		int k = h[u] - h[v];
		for(int j = 0; 1 << j <= k; j++)
			if(k >> j & 1)
				u = up[u][j];
	}
	
	if(u == v) return u;
	
	int k = __lg(h[u]);
	for(int j = k; j >= 0; j--)
		if(up[u][j] != up[v][j])
			u = up[u][j], v = up[v][j];
	return up[u][0];
}

ll Min_Dist(int u, int v){
	return f[u] + f[v] - 2*f[lca(u, v)];
}

ll Max_Dist(int u, int v){
	int 
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n;
	for(int i = 1, u, v, w; i < n; i++){
		cin >> u >> v >> w;
		Edge x(u, v), y(v, w);
		g[u].push_back(y);
		g[v].push_back(x);
	}
	dfs(1);
	
	return 0;
}

