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
		int a, b, n; cin >> a >> b >> n;
		if(a < b) swap(a, b);
		int lcm = a/__gcd(a, b)*b;
		int x = n/(lcm/a + lcm/b - 1);
		int y = n%(lcm/a + lcm/b - 1);
		int z = a/b+1;
		if(y%z == 0) cout << 1ll*lcm*x*(x > 0) + 1ll*(y/z)*a << endl;
		else cout << 1ll*lcm*x*(x > 0) +  1ll*(y-y/z)*b << endl;
	}
	return 0;
}

