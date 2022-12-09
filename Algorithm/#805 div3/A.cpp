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
		int x = stoi(s) - pow(10, s.size()-1);
		cout << x << endl;
	}
	return 0;
}

