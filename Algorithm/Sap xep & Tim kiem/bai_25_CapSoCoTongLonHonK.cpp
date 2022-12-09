#include <bits/stdc++.h>
using namespace std;
const int Max = 100000;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k, a[Max];
		cin >> n >> k;
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		int tmp = 0;
		for(int i = 0; i < n-1; i++){
			auto it = upper_bound(a+i+1, a+n, k-a[0]);
			tmp += a+n - it;
		}
		cout << tmp << endl;
	}
	return 0;
}
