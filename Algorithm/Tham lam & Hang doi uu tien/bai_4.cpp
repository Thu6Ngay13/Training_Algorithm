#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(auto &x:a) cin >> x;
		sort(a, a+n);
		string x = "", y = "";
		for(int i = 0; i < n; i++){
			if(i%2)
				x += to_string(a[i]);
			else
				y += to_string(a[i]);
		}
		cout << stoll(x) + stoll(y) << endl;
	}
	return 0;
}

