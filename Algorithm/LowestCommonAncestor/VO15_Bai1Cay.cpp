#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 70000 + 5;

int n, q;
int h[N], up[N][18];
vector<int> g[N];

void dfs(int u){
	for(int v:g[u]){
		if(v == up[u][0]) continue;
		
		h[v] = h[u] + 1;
		up[v][0] = u;
		
		for(int j = 1; j < 18; j++)
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
	for(int j = k; j >= 0; j--)
		if(up[u][j] != up[v][j])
			u = up[u][j], v = up[v][j];
	return up[u][0];
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n >> q;
	for(int i = 1, u, v; i < n; i++){
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(1);
	while(q--){
		int u, v, ans = N; cin >> u >> v;
		while(u < v){
			int p = lca(u, v);
			if(h[p] < h[ans] || ans == N) ans = p;
			u++;
		}
		cout << ans << endl;
	}
	
	return 0;
}

