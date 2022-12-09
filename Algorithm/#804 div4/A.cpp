#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int tt; cin >> tt;
	while(tt--){
		string s; cin >> s;
		for(int i = 0; i < 3; i++)
			s[i] = tolower(s[i]);
		if(s == "yes") cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

