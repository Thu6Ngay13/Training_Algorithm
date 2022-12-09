#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll sum = 0;
		int a[n];
		for(int i = 0; i < n-1; i++){
			int x; cin >> x;
			sum += x;
		}
		cout << 1ll*n*(n+1)/2 - sum << endl;
	}
	return 0;
}
	
