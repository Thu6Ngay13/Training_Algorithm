#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

struct canh{
	int x, y, w;
};

int n, m, parent[Max], sz[Max];
vector<canh> dscanh;

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

void kruskal(){
	sort(begin(dscanh), end(dscanh), [](canh a, canh b)->bool{
		return a.w < b.w;
	});
	int ans = 0;
	vector<canh> tree;
	for(int i = 0; i < m; i++){
		if(tree.size() == n-1) break;
		if(Union(dscanh[i].x, dscanh[i].y)){
			tree.push_back(dscanh[i]);
			ans += dscanh[i].w;
		}
	}
	if(tree.size() != n-1)	
			cout << "Do thi khong lien thong" << endl;
	else
		cout << "Do dai cay khung cuc tieu : " << ans << endl;
}

void ip(){
	memset(sz, 1, sizeof(sz));
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
		parent[i] = i;
		
	for(int i = 0; i < m; i++){
		int x, y, w; cin >> x >> y >> w;
		dscanh.push_back({x, y, w});
	}
}

void op(){
//	6 8
//	1 2 1
//	1 6 2
//	2 6 1
//	2 3 3
//	6 4 8
//	3 5 5
//	4 5 6
//	3 4 4
	kruskal();
}

int main(){
	ip();
	op();
	return 0;
}

