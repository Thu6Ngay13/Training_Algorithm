#include <bits/stdc++.h>
#include <fstream>
using namespace std;
using ll = long long;
const int MAX = 200005;
const int MOD = 1e9 + 7;

int n, q, a[MAX];
ll bit[MAX];

void update(int i, int val){
	while(i <= n){
		bit[i] += 1ll*val;
		i += (i & -i);
	}
}

ll get(int i){
	ll ans = 0;
	while(i > 0){
		ans += bit[i];
		i -= (i & -i);
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> q;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++) update(i, a[i]-a[i-1]);
	while(q--){
		int p; cin >> p;
		if(p&1){
			int a, b, u; cin >> a >> b >> u;
			update(a, u);
			update(b+1, -u);
		}
		else{
			int k; cin >> k;
			cout << get(k) << endl;
		}
	}
	return 0;
}

