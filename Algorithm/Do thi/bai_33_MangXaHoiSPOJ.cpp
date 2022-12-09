#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

int n, m, cnt, no[Max];
vector<int> adj[Max], tplt;

void ip(){
	cin >> n >> m; 
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(no, true, sizeof(no));
}

void dfs(int u){
	cnt++;
	no[u] = false;
	tplt.push_back(u);
	for(auto v:adj[u])
		if(no[v])
			dfs(v);
}

void op(){
	bool ok = true;
	for(int i = 1; i <= n; i++)
		if(no[i]){
			cnt = 0;
			tplt.clear();
			dfs(i);
			for(auto it:tplt){
				if(cnt-1 != adj[it].size())
					ok = false;
			}
		}
	if(ok) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(){
	ip();
	op();
	return 0;
}

