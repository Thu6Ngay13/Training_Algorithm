#include <bits/stdc++.h>
using namespace std;
const int Max = 1235;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		pair<int, int> pe[Max];
		for(int i = 0 ; i < n; i++){
			int x; cin >> x;
			pe[i].first = x;
			pe[i].second = i;
		}
		sort(pe, pe + n);
		int tmp = 0;
		for(int i = 0; i < n; i++){
			if(pe[i].second != i){
				swap(pe[i].first, pe[pe[i].second].first);
				swap(pe[i].second, pe[pe[i].second].second);
				tmp++;
			}
		}
		cout << tmp << endl;
	}
	return 0;
}
