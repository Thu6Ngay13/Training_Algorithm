#include <bits/stdc++.h>
using namespace std;

struct AA{
	int a;
	int i;
	AA(int _a, int _i){
		a = _a;
		i = _i;
	}
};

struct SS{
	int i, j;
	int k;
	int idx;
	SS(int _i, int _j, int _k, int _idx){
		i = _i;
		j = _j;
		k = _k;
		idx = _idx;
	}
};

bool operator < (AA a, AA b){ return a.a < b.a;}
bool operator < (SS a, SS b){ return a.k < b.k;}

int n, q;
vector<AA> a;
vector<SS> query;
vector<int> tree;
vector<int> ans;

void build(int id, int l, int r){
	if(l == r){ tree[id] = 1; return;}
	
	int m = (l+r)/2;
	build(id*2+1, l, m);
	build(id*2+2, m+1, r);
	tree[id] = tree[id*2+1] + tree[id*2+2];
}

void update(int id, int l, int r, int i){
	if(i < l || r < i) return;
	if(l == r){ tree[id] = 0; return;}
	
	int m = (l+r)/2;
	update(id*2+1, l, m, i);
	update(id*2+2, m+1, r, i);
	
	tree[id] = tree[id*2+1] + tree[id*2+2];
}

int get(int id, int l, int r, int u, int v) {
    if(v < l || r < u) return 0;
    if(u <= l && r <= v) return tree[id];
    
    int m = (l+r)/2;
    return get(id*2+1, l, m, u, v) + get(id*2+2, m+1, r, u, v);
}

int bs(vector<AA> a, int x){
	int l = 0, r = a.size()-1;
	int pos = 0;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m].a <= x){
			l = m+1;
			pos = m;
		}
		else r = m-1;
	}
	return pos;
}

void solve(){
	//nhap mang
	cin >> n; 
	a.resize(n, AA(0, 0)); 
	for(int i = 0; i < n; ++i) 
		cin >> a[i].a, a[i].i = i;
	sort(a.begin(), a.end());
	
	//nhap truy van
	cin >> q; 
	query.resize(q, SS(0, 0, 0, 0));
	for(int i = 0; i < q; ++i) 
		cin >> query[i].i >> query[i].j >> query[i].k, query[i].idx = i;
	sort(query.begin(), query.end());
	
	//xay dung cay
	tree.resize(4*n, 1);
	build(0, 0, n-1);
	
	//solve
	ans.resize(q, 0);
	for(SS qq:query){
		int e = bs(a, qq.k);
		for(int i = 0; i <= e; ++i) update(0, 0, n-1, a[i].i);
		ans[qq.idx] = get(0, 0, n-1, qq.i-1, qq.j-1);
	}
	
	//in ket qua
	for(int x:ans) cout << x << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	solve();
	return 0;
}
