#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
int parent[1001];

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
	if(a >= b){
		parent[a] = b;
		return true;
	}
	parent[b] = a;
	return true;
}

void ip(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++) parent[i] = i;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		Union(x, y);
	}
}

void op(){
	int k = 0;
	vector<int> v;
	for(int i = 2; i <= n; i++){
		if(parent[1] != parent[i]){
			k++;
			Union(1, i);
			v.push_back(i);
		}
	}
	cout << k << endl;
	int tmp = 1;
	for(auto it:v){
		cout << tmp << " " << it << endl;
		tmp = it;
	}
}

int main(){
	ip();
	op();
	return 0;
}

