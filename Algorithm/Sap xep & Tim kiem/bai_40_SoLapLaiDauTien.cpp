#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n, value = -1; cin >> n;
		int a[n];
		for(auto &x:a) cin >> x;
		for(int i = 1; i < n; i++)
			if(a[i] == a[i-1]){
				value = a[i];
				break;
			}
		cout << value << endl;
	}
	return 0;
}
