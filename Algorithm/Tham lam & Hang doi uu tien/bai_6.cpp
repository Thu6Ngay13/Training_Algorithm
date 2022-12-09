#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		pair<int, int> pe[n];
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			pe[i] = make_pair(x, i);
		}
		sort(pe, pe+n);
		bool ok = true;
		for(int i = 0; i < n/2 && ok; i++){
			if(pe[i].second != i && pe[i].second != n-1-i)
				ok = false;
		}
		if(ok)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}

