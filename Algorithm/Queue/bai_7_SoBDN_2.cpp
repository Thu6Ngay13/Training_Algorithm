#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

ll ans[502];
void solve(){
	vector<ll> v;
	queue<string> q;
	q.push("1");
	while(q.size()){
		string top = q.front(); q.pop();
		if(top.size() >= 20) break; 
		v.push_back(stoll(top));
		q.push(top + "0");
		q.push(top + "1");
	}
	for(int i = 1; i < 502; i++){
		for(auto it:v){
			if(it % i == 0){
				ans[i] = it;
				break;
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		cout << 1ll*n*ans[n] << endl;
	}
	return 0;
}

