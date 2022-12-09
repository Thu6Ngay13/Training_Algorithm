#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

int n, m, dis[Max], low[Max], timer = 0;
vector<int> adj[Max];
vector<pair<int, int>> ans;

void ip(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = 1; i <= n; i++)
		dis[i] = low[i] = 0;
}

void dfs(int u, int par){
	dis[u] = low[u] = ++timer;
	for(auto v:adj[u]){
		if(v == par) continue;
		if(!dis[v]){
			dfs(v,u);
			low[u] = min(low[u], low[v]);
			if(dis[u] < low[v])
				ans.push_back({u, v});
		}
		else low[u] = min(dis[v], low[u]);
	}
}

void op(){
	for(int i = 1; i <= n; i++)
		if(!dis[i])
			dfs(i, -1);
	cout << ans.size() << endl;
}

int main(){
	ip();
	op();
	return 0;
}

