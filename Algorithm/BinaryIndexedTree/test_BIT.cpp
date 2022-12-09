#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 100005;
const int MOD = 1e9 + 7;

int n, q, A[MAX];
ll BIT[MAX];

/*
void _tapcon(){
	int S = 46;
	for (int i = S; i > 0; i = (i - 1) & S)
		cout << i << endl;
}
*/

void _update(int i, int val){
	while(i <= n){
		BIT[i] += val;
		i += (i&-i);
	}
}

ll _get(ll i){
	ll sum = 0;
	while(i > 0){
		sum += BIT[i];
		i -= (i & -i);
	}
	return sum;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> q;
	for(int i = 1; i <= n; i++){
		cin >> A[i];
		_update(i, A[i]);
	}
	while(q--){
		int p, i, val; cin >> p >> i >> val;
		if(p == 1) _update(i, val);
		else cout << (_get(val) - _get(i-1)) << endl;
	}
	return 0;
}

