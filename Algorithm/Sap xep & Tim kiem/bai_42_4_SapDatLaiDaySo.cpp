#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		bool check[n] = {false};
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] < n)
				check[a[i]] = true;
		}
		for(int i = 0; i < n; i++)
			if(check[i])
				cout << i << " ";
			else
				cout << -1 << " ";
	}
	return 0;
}
	
