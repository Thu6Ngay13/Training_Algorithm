#include <bits/stdc++.h>
#include <fstream>
using namespace std;

struct SS{
	int optimal; // so ngoac dung, vd: () : 2
	int open; // luu so ngoac '(' thua, vd: ((): 1
	int close; // luu so ngoac ')' thua, vd: ())) : 2
	
	SS(int opt, int o, int c){
		optimal = opt;
		open = o; 
		close = c;
	}
};

SS operator + (SS a, SS b){
	SS res(0, 0, 0);
	int temp = min(a.open, b.close);
	res.optimal = a.optimal + b.optimal + 2*temp;
	res.open = a.open + b.open - temp;
	res.close = a.close + b.close - temp;
	return res;
}

int n;
string s;
vector<SS> tree;

void _update(int id, int l, int r, int x, int y){
	if(y < l || r < x) return;
	if(l == r){ tree[id] = SS(0, s[l] == '(', s[l] == ')'); return;}
	
	int m = (l+r)/2;
	_update(id*2, l, m, x, y);
	_update(id*2+1, m+1, r, x, y);
	tree[id] = tree[id*2] + tree[id*2+1];
}

SS _get(int id, int l, int r, int x, int y){
	if(y < l || r < x) return SS(0, 0, 0);
	if(x <= l && r <= y) return tree[id];
	
	int m = (l+r)/2;
	return _get(id*2, l, m, x, y) + _get(id*2+1, m+1, r, x, y);
}

void solve(){
	cin >> s; n = s.size(); s = "#" + s;
	tree.resize(4*n+1, SS(0, 0, 0));
	for(int i = 1; i <= n; i++) _update(1, 1, n, i, i);
	int q; cin >> q;
	while(q--){
		int x, y; cin >> x >> y;
		SS temp = _get(1, 1, n, x, y);
		cout << temp.optimal << endl;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	solve();
	return 0;
}




