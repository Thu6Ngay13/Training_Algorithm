#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(auto &x:a) cin >> x;
		sort(a, a+n);
		ll x = 0, y = 0;
		for(int i = 0; i < max(k, n-k); i++)
			x += 1ll*a[n-1-i];
		for(int i = 0; i < min(k, n-k); i++)
			y += 1ll*a[i];
		cout << x - y << endl;
	}
	return 0;
}

