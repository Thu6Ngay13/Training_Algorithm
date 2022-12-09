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
		int ok1 = 1;
		int ok2 = 0;
		int n, m; cin >> n >> m;
		string a, b; cin >> a >> b;
		if(a.substr(n-m+1, n) != b.substr(1, m)) ok1 = 0;
		for(int i = 0; i < n-m+1; i++)
			if(a[i] == b[0])
				ok2 = 1;
		if(ok1 && ok2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

