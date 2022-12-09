#include <bits/stdc++.h>
using namespace std;
const int Max = 1005;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, cnt = 1; cin >> n;
		pair<int, int> pe[Max];
		for(int i = 0; i < n; i++){
			cin >> pe[i].first;
			cin >> pe[i].second;
		}
		sort(pe, pe+n, cmp);
		int tmp = pe[0].second;
		for(int i = 0; i < n; i++){
			if(pe[i].first > tmp){
				tmp = pe[i].second;
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
