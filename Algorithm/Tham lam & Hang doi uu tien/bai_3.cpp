#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a+n);
	ll sum = 0;
	for(int i = 0; i < n; i++){
		sum += 1ll*i*a[i];
		sum %= ll(1e9+7);
	}
	cout << sum << endl;
	return 0;
}

