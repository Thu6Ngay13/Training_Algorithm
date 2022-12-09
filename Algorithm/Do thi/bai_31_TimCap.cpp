#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

int n, ans = 0, child[Max];
vector<int> adj[Max];

void ip(){
	cin >> n;
	for(int i = 0; i < n-1; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

int dfs(int u, int par){
	int cnt = 1;
	for(auto v:adj[u])
		if(v != par){
			cnt += dfs(v, u);
		}
	child[u] = cnt;
	return cnt;
}

void op(){
	int ans = 0;
	dfs(1, -1);
	for(int i = 1; i <= n; i++)
		ans += child[i];
	cout << ans << endl;
}

int main(){
	ip();
	op();
	return 0;
}

