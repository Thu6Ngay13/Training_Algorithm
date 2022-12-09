#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 100005;
const int MOD = 1e9 + 7;

int n;
int A[MAX];

int lb(int x){
	int res = 0;
	int l = 0, r = n-1;
	while(l <= r){
		int m = (l+r)/2;
		if(A[m] >= x){
			r = m-1;
			res = m;
		}
		else l = m+1;
	}
	return res;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	for(int i = 0; i < n; i++) cin >> A[i];
	sort(A, A+n);
	int q; cin >> q;
	while(q--){
		int x; cin >> x;
		if(x > A[n-1]) cout << n << endl;
		else cout << lb(x) << endl;
	}
	return 0;
}

