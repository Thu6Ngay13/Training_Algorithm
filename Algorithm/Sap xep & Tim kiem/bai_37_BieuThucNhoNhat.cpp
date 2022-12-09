#include <bits/stdc++.h> 
using namespace std;
using ll = long long;
const int Max = 100;


int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[Max];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n, greater<int>());
		ll sum = a[0];
		for(int i = 1; i < n; i++){
			if(i <= k)
				sum += a[i];
			else
				sum -= a[i];
		}
		cout << sum << endl;
	}
	return 0;
}
