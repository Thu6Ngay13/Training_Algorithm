#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 100005;
const int MOD = 1e9 + 7;

int n, q, A[MAX], diff[MAX];
ll bit1[MAX], bit2[MAX];

void update(ll bit[], int i, ll val){
	while(i <= n){
		bit[i] += val;
		i += (i & -i);
	}
}

void update_(int l, int r, ll val){
	update(bit1, l, (n-l+1)*val);
	update(bit1, r+1, (n-r)*-val);
	update(bit2, l, val);
	update(bit2, r+1, -val);
}

ll get(ll bit[], int i){
	ll sum = 0;
	while(i > 0){
		sum += bit[i];
		i -= (i & -i);
	}
	return sum;
}

ll get_(int i){
	ll c1 = get(bit1, i);
	ll c2 = get(bit2, i);
	return c1 - c2*(n-i);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> q;
	for(int i = 1; i <= n; i++) cin >> A[i];
	for(int i = 1; i <= n; i++) diff[i] = A[i]-A[i-1];
	for(int i = 1; i <= n; i++){
		update(bit1, i, 1ll*(n-i+1)*diff[i]);
		update(bit2, i, diff[i]);
	}
	while(q--){
		int p, i, j; cin >> p >> i >> j;
		if(p&1){
			ll val; cin >> val;
			update_(i, j, val);
		}
		else cout << get_(j) - get_(i-1) << endl;
	}
	return 0;
}

