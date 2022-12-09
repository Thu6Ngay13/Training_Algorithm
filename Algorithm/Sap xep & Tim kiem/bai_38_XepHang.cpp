#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
	return a.first < b.first;
}
int main(){
	int n; cin >> n;
	pair<int, int> pe[n];
	for(int i = 0; i < n; i++){
		int t, d; cin >> t >> d;
		pe[i] = make_pair(t, d);
	}
	sort(pe, pe+n, cmp);
	int tmp = pe[0].first + pe[0].second;
	for(int i = 1; i < n; i++){
		if(tmp >= 24)
			tmp -= 24;
		if(pe[i].first > tmp)
			tmp = pe[i].first + pe[i].second;
		else
			tmp += pe[i].second;
	}
	cout << tmp << endl;
	return 0;
}
