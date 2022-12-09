#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		map<int, bool> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]] = true;
		}
		vector<int> vec(a, a+n);
		sort(vec.begin(), vec.end());
		for(int i = 0; i < n; i++){
			auto it = upper_bound(vec.begin(), vec.end(), a[i]);
			if(it != vec.end())
				cout << *it << " ";
			else
				cout << "_ ";
		}
		cout << endl;
	}
	return 0;
}
