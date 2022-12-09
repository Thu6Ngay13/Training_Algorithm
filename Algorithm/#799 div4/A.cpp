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
		int a, b, c, d; cin >> a >> b >> c >> d;
		cout << ((a < b) + (a < c) + (a < d)) << endl;
	}
	return 0;
}

