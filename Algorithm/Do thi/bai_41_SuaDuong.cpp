#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 100001;

int n, m, parent[Max], sz[Max], res = 1;

int find(int u){
	if(u == parent[u]) return u;
	return parent[u] = find(parent[u]);
}

int Union(int a, int b){
	a = find(a);
	b = find(b);
	if(a == b) return 0;
	if(sz[a] < sz[b]) swap(a, b);
	parent[b] = a;
	sz[a] += sz[b];
	res = max(res, sz[a]);
	return 1;
}

void iop(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		parent[i] = i;
		sz[i] = 1;
	}
	int cnt = n;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		cnt -= Union(x, y);
		cout << cnt << " " << res << endl;
	}
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	iop();
	return 0;
}

