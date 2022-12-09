#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

int n, m, cockroach[Max], no[1001], ans = 0;
vector<int> adj[Max];

void ip(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> cockroach[i];
		no[i] = true;
	}
	for(int i = 0; i < n-1; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void dfs(int u, int par, int dem){
	if(dem > m) return;
	if(adj[u].size() == 1 && u != 1) ans++;
	for(auto v:adj[u]){
		if(v != par){
			if(cockroach[v]) dfs(v, u, dem+1);
			else dfs(v, u, 0);
		}
	}
	
}

void op(){
	dfs(1, -1, cockroach[1]);
	cout << ans << endl;
}

int main(){
	ip();
	op();
	return 0;
}

