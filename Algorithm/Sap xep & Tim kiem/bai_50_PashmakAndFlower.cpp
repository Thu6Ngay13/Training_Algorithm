#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n; cin >> n;
	int a[n]; map<int, int> mp;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	sort(a, a+n);
	if(mp.size() > 1)
		cout << a[n-1]-a[0] << " " << 1ll*mp[a[0]]*mp[a[n-1]] << endl;
	else
		cout << a[n-1]-a[0] << " " << 1ll*mp[a[0]]*(mp[a[n-1]]-1)/2<< endl;
	return 0;
}
