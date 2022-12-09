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
		string s; cin >> s;
		set<char> se;
		int cnt = 1;
		for(int i = 0; i < s.size(); i++){
			se.insert(s[i]);
			if(se.size() > 3){
				se.clear();
				cnt++;
				se.insert(s[i]);
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

