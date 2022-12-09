#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;

int n;
int par[MAX];
int up[MAX][17];
vector<int> v[MAX];

void process(){
	for(int u = 1; u <= n; ++u) up[u][0] = par[u];
	for(int u = 1; u <= n; ++u)
		for(int j = 1; j <= 17; ++j)
			up[u][j] = up[up[u][j-1]][j-1];
}

int ancestor_k(int u, int k){
	for(int j = 16; j >= 0; --j){
		if(k >= (1 << j)){
			k -= 1 << j;
			u = up[u][j];
		}
	}
	return u;
}

int ancestor_kk(int u, int k){
	for(int j = 0; (1 << j) <= k; ++j)
		if(k >> j & 1) u = up[u][j];
	return u;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
//	cin >> n;
//	for(int i = 0; i < n; ++i){
//		int x, y; cin >> x >> y;
//		v[x].push_back(y);
//	}
	cout << (5 >> 3 & 1 ) << endl;
	return 0;
}

