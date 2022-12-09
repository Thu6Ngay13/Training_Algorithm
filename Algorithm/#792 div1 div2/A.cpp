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
		int vl = 10;
		int idx = -1;
		for(int i = 0; i < s.size(); i++)
			if(s[i]-'0' < vl){
				vl = s[i]-'0';
				idx = i;
			}
		if(s.size() == 1) cout << s << endl;
		else if(s.size() == 2) cout << s[1] << endl;
		else cout << vl << endl;
	}
	return 0;
}

