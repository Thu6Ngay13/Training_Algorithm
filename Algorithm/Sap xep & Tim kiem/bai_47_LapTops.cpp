#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main(){
	int n; cin >> n;
	pair<int, int> pe[n];
	for(int i = 0; i < n; i++){
		int x, y; cin >> x >> y;
		pe[i] = make_pair(x, y);
	}
	sort(pe, pe+n, cmp);
	bool ok = false;
	for(int i = 1; i < n && ok == false; i++)
		if(pe[i-1].first >= pe[i].first)
			ok = true;
	if(ok)
		cout << "Happy Alex" << endl;
	else
		cout << "Poor Alex" << endl;;
	return 0;
}
