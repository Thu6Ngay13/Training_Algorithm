#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int x[n], y[m];
	map<int, int> mp;
	for(int i = 0; i < n; i++)
		cin >> x[i];
	for(int i = 0; i < m; i++){
		cin >> y[i];
		mp[y[i]]++;
	}
	sort(y, y+n);
	int tmp = 0;
	for(int i = 0; i < n; i++){
		if(x[i] == 1)
			tmp += mp[0];
		else if(x[i]){
			auto it = upper_bound(y, y+n, x[i]);
			tmp += y+m-it+mp[1];
			if(x[i] == 2)
				tmp -= (mp[3]+mp[4]);
		}
	}
	cout << tmp << endl;
	return 0;
}
