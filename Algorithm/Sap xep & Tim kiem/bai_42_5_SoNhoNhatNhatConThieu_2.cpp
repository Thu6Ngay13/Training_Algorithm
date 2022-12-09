#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll sum = 0;
		int a[n];
		for(int i = 0; i < n-2; i++){
			int x; cin >> x;
			sum += x;
		}
		ll tmp = 1ll*n*(n+1)/2 - sum;
		if(tmp && sum != n-2){
			for(int i = 1; i <= tmp/2; i++)
				if(*lower_bound(a, a+n, i) != i){
					cout << i << " " << tmp - i << endl;
					break;
				}
		}
		else
			cout << -1 << endl;
	}
	return 0;
}
	
