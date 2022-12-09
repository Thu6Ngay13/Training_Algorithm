#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t; cin >> t;
	while(t--){
		int n;  cin >> n;
		bool ok = true;
		pair<int, int> pi[n];
		set<int> se1;
		set<int> se2;
		for(int i = 0; i < n; i++){
			int x, y; cin >> x >> y;
			pi[i] = make_pair(x, y);
		}
		for(int i = 0; i < n; i++){
			if(((se1.count(pi[i].first) || se1.count(pi[i].second))
			&& (se2.count(pi[i].first) || se2.count(pi[i].second)))
			|| pi[i].first == pi[i].second){
//				cout << 0 << endl;
				ok = false;
				break;
			}
			else if(!se1.count(pi[i].first) && !se1.count(pi[i].second)){
				se1.insert(pi[i].first);
				se1.insert(pi[i].second);
//				cout << 1 << endl;
			}
			else{
				se2.insert(pi[i].first);
				se2.insert(pi[i].second);
//				cout << 2 << endl;
			}
		}
		if(ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

