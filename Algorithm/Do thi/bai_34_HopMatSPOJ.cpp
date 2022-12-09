#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

int k, n, m, no[Max], cnt[Max];
vector<int> pos, adj[Max];

void ip(){
	cin >> k >> n >> m;
	for(int i = 0; i < k; i++){
		int x; cin >> x;
		pos.push_back(x);
	}
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].push_back(y);
	}
}

void dfs(int u){
	no[u] = false;
	cnt[u]++;
	for(auto v:adj[u])
		if(no[v])
			dfs(v);
}

void op(){
	for(auto it:pos){
		memset(no, true, sizeof(no));
		dfs(it);
	}
	int ans = 0;
	for(int i = 1; i <= n; i++)
		if(cnt[i] == k)
			ans++;
	cout << ans << endl;
}

int main(){
	ip();
	op();
	return 0;
}

