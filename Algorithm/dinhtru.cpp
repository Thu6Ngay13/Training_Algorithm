#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

int n, m, dis[Max], low[Max], tru[Max], timer = 0;
vector<int> adj[Max];

void ip(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = 1; i <= n; i++)
		dis[i] = low[i] = tru[i] = 0;
}

void dfs(int u, int par){
	dis[u] = low[u] = ++timer;
	int child = 0; //dung de xet dinh bat dau thuat toan dfs
	for(auto v:adj[u]){
//		if(v == par) continue; //co hay khong cung duoc
		if(!dis[v]){
			child++;
			dfs(v, u);
			low[u] = min(low[u], low[v]);
			if(par != -1 && dis[u] <= low[v])
				tru[u] = true;
		}
		else
			low[u] = min(low[u], dis[v]);
	}
	if(par == -1 && child > 1) tru[u] = true;
}

void op(){
	int ans = 0;
	for(int i = 1; i <= n; i++)
		if(!dis[i])
			dfs(i, -1);
	for(int i = 1; i <= n; i++)
		if(tru[i])
			cout << i << " ";
}

int main(){
	ip();
	op();
	return 0;
}

