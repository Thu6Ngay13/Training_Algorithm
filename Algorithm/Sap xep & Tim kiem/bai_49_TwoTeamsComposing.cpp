#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		map<int, int> mp;
		set<int> se;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
			se.insert(a[i]);
		}
		int fmax = 0;
		for(auto it:mp)
			fmax = max(fmax, it.second);
		int x = se.size();
		cout << max(min(x-1, fmax), min(x, fmax-1)) << endl;
	}
	return 0;
}

