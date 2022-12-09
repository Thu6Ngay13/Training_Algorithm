#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int n; cin >> n;
	pair<int, int> pe[n];
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		pe[i] = make_pair(x, i);
	}
	sort(pe, pe+n);
	int ans = 1;
	for(int i = 1; i < n; i++){
		if(pe[i-1].second > pe[i].second)
			ans++;
	}
	cout << ans << endl;
	return 0;
}

