#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.first < b.first;
}

int main(){
	ll s; int n; bool ok = true; cin >> s >> n;
	pair<int, int> pe[n];
	for(int i = 0; i < n; i++){
		int x, y; cin >> x >> y;
		pe[i] = make_pair(x, y);
	}
	sort(pe, pe+n, cmp);
	for(int i = 0; i < n && ok; i++){
		if(s > pe[i].first)
			s += pe[i].second;
		else
			ok = false;
	}
	if(ok)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
