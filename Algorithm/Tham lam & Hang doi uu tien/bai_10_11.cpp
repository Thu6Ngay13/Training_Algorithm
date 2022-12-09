#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		priority_queue<int, vector<int>, greater<int>> Q;
		for(int i = 0; i < n; i++){
			int tmp; cin >> tmp;
			Q.push(tmp);
		}
		ll ans = 0;
		while(Q.size() > 1){
			int x = Q.top(); Q.pop();
			int y = Q.top(); Q.pop();
			ans += 1ll*(x+y);
			Q.push(x+y);
		}
		cout << ans << endl;
	}
	return 0;
}

