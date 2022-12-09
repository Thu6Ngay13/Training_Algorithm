#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

ll ans[250];
void solve(){
	vector<ll> v;
	queue<string> q;
	q.push("8");
	while(q.size()){
		string top = q.front(); q.pop();
		v.push_back(stoll(top));
		if(top.size() == 19) break;
		q.push(top + "0");
		q.push(top + "8");
	}
	for(int i = 1; i <= 210; i++){
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
		int n; cin >> n;
		cout << ans[n] << endl;
	}
	return 0;
}

