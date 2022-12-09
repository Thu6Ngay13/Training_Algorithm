#include <bits/stdc++.h>
using namespace std;
const int N = 200000 + 5;


int n, k, root;
int h[N], up[N][18];
vector<int> g[N], group[N >> 1];

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

int dist(int u, int v){
	int p = lca(u, v);
	return h[u] + h[v] - 2*h[p];
}

int solve(vector<int> v){
	int A = v[0], B = A, d, max_dist = 0;
	for(int x:v){
		d = dist(A, x);
		if(d > max_dist){
			max_dist = d;
			B = x;
		}
	}
	
	max_dist = 0;
	for(int x:v){
		d = dist(B, x);
		max_dist = max(max_dist, d);
	}
	return max_dist;
}

int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		int x, y; cin >> x >> y;
		group[x].push_back(i);
		g[y].push_back(i);
		g[i].push_back(y);
	}
	
	dfs(root);
	
	for(int i = 1; i <= k; ++i)
		cout << solve(group[i]) << endl;
	
	return 0;
}
