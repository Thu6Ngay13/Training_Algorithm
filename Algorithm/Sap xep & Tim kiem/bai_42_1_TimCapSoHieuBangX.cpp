#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, x, ok = false; cin >> n >> x;
		int a[n];
		for(auto &x:a) cin >> x;
		sort(a, a+n);
		for(int i = upper_bound(a, a+n, x)-a; i < n; i++){
			if(a[i]-x == *lower_bound(a, a+n, a[i]-x)){
				ok = true;
				break;
			}
		}
		if(ok)
			cout << 1 << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}
