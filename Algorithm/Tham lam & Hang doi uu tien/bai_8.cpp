#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n];
		pair<int, int> pe[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		for(int i = 0; i < n; i++)
			cin >> b[i];
		for(int i = 0; i < n; i++)
			pe[i] = make_pair(a[i], b[i]);
		sort(pe, pe+n, cmp);
		int ans = 0, tmp;
		for(int i = 0; i < n; i++)
			if(pe[i].first > tmp){
				tmp = pe[i].second;
				ans++;
			}
		cout << ans << endl;
	}

	return 0;
}

