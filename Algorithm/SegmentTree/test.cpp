#include <bits/stdc++.h>
#include <fstream>
using namespace std;
const int N = 1e5 + 5;

struct SS{
	
};

int n;
int A[N], ST[N];

//xet doan tu l -> r
//update : doan x -> y = v
void _update(int id, int l, int r, int x, int y, int v){
	if(y < l || r < x) return;
	if(l == r){ ST[id] = v; return;}
	
	int m = (l+r)/2;
	_update(id*2, l, m, x, y, v);
	_update(id*2+1, m+1, r, x, y, v);
	
	ST[id] = max(ST[id*2], ST[id*2+1]);
}

int _get(int id, int l, int r, int u, int v){
	if(v < l || u > r) return -(int)INFINITY;
	
	if(u <= l && r <= v) return ST[id];
	int m = (l+r)/2;
	return max(_get(id*2, l, m, u, v), _get(id*2+1, m+1, r, u, v));
}

void solve(){
	cin >> n; for(int i = 1; i <= n; i++) cin >> A[i];
	for(int i = 1; i <= n; i++){
		_update(1, 1, n, i, i, A[i]);
	}
	for(int i = 1; i <= 4*n; i++) cout << ST[i] << " ";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	solve();
	return 0;
}

