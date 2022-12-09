#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

int n, m;
int parent[Max];
int sz[Max];

int find(int u){
	if(u == parent[u])
		return u;
	return parent[u] = find(parent[u]);
}

bool Union(int a, int b){
	a = find(a);
	b = find(b);
	if(a == b)
		return false;
	if(sz[a] >= sz[b]){
		parent[b] = a;
		sz[a] += sz[b];
		return true;
	}
	parent[a] = b;
	sz[b] += sz[a];
	return true;
}

void ip(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		parent[i] = i;
		sz[i] = 1;
	}
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		Union(x, y);
	}
}

void op(){
	int ma = 0;
	for(int i = 1; i <= n; i++)
		ma = max(ma, sz[i]);
	cout << ma << endl;
}

int main(){
	ip();
	op();
	return 0;
}

