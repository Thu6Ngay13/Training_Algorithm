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
		int p = 0;
		int q = 0;
		int k = 0;
		vector<pair<int, int>> v;
		for(int i = 0; i < s.size(); i++)
			if(s[i] == '(') p++;
			else if(s[i] == ')') q++;
	}	
	return 0;
}

