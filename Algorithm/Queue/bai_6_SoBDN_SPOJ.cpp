#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

vector<ll> v;
void solve(){
	queue<string> q;
	q.push("1");
	while(q.size()){
		string top = q.front(); q.pop();
		if(stoll(top) >= 1ll*(1e18+5)) break; 
		v.push_back(stoll(top));
		q.push(top + "0");
		q.push(top + "1");
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	solve();
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		int cnt = 0;
		for(auto it:v){
			if(it < n)
				cnt++;
			else
				break;
		}
		cout << cnt << endl;
	}
	return 0;
}

