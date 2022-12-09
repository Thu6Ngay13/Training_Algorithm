#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

int n, m, parent[Max], sz[Max];

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
	if(sz[a] >= sz[b]) swap(a, b);
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
	cout << endl;
	for(int i = 1; i <= n; i++){
		cout << find(i) << " " << sz[i] << endl;
	}
}

//6 8
//1 3
//1 5
//1 6
//2 5
//2 6
//3 4
//3 5
//5 6

int main(){
	ip();
	op();
	return 0;
}

