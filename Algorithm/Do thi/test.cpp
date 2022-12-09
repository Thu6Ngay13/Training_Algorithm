#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1001;
const int MOD = 1e9 + 7;

vector<int> v[MAX];
vector<int> tplt;
queue<int> q;
bool visited[MAX];
int n, m, k;

void dfs(int u){
	tplt.push_back(u);
	visited[u] = false;
//	cout << u << " ";
	for(int x:v[u])
		if(visited[x])
			dfs(x);
}

void bfs(int u){
	tplt.push_back(u);
	q.push(u);
	visited[u] = false;
	while(q.size()){
		int top = q.front(); q.pop();
//		cout << top << " ";
		for(int x:v[top])
			if(visited[x]){
				q.push(x);
				tplt.push_back(u);
				visited[top] = false;
			}
	}
}

void input(){
	cin >> n >> m >> k;
	for(int i = 0; i < MAX; i++) visited[i] = true;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i = 1; i <= n; i++)
		sort(v[i].begin(), v[i].end());
}

void solve(){
	for(int i = 1; i <= n; i++){
		if(visited[i]){
			dfs(i);
			sort(tplt.begin(), tplt.end());
			for(int x:tplt)
				cout << x << " ";
			cout << endl;
			tplt.clear();
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	input();
	solve();
//	dfs(k);
//	bfs(k);
	return 0;
}

