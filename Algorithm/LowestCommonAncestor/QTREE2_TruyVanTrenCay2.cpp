#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e4 + 5;

struct Edge{
	int v, w;
	Edge(int _v, int _w){
		v = _v;
		w = _w;
	}
};
int n;
int h[N], f[N], up[N][15];
vector<Edge> g[N];

void dfs(int u){
	for(Edge e:g[u]){
		int v = e.v, w = e.w;
		if(v == up[u][0]) continue;
		
		h[v] = h[u] + 1;
		f[v] = f[u] + w;
		up[v][0] = u;
		
		for(int j = 1; j < 15; j++)
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

int DIST(int u, int v){
	return f[u]	+ f[v] - 2*f[lca(u, v)];
}

int KTH(int u, int v, int k){
	k--;
	int p = lca(u, v);
	int aa = h[u] - h[p];
	int bb = h[v] - h[p] - (k - aa);
	if(k <= aa){
		for(int j = 0; (1 << j) <= k; j++)
			if(k >> j & 1)
				u = up[u][j];
		return u;
	}
	else{
		for(int j = 0; (1 << j) <= bb; j++)
			if(bb >> j & 1)
				v = up[v][j];
		return v;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int tt; cin >> tt;
	while(tt--){
		cin >> n;
		
		for(int i = 1; i <= n; i++){
			g[i].clear();
			h[i] = 0;
			for(int j = 0; j < 15; j++)
				up[i][j] = 0;
		}
		
		for(int i = 1, u, v, w; i < n; i++){
			cin >> u >> v >> w;
			Edge x(u, v), y(v, w);
			g[u].push_back(y);
			g[v].push_back(x);
		}
		dfs(1);
		
		string rq; cin >> rq;
		while(rq != "DONE"){
			if(rq == "DIST"){
				int u, v; cin >> u >> v;
				cout << DIST(u, v) << endl;
			}
			else{
				int u, v, k; cin >> u >> v >> k;
				cout << KTH(u, v, k) << endl;
			}
			cin >> rq;
		}
	}
	
	return 0;
}

