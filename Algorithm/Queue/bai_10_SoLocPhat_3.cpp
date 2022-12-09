#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

ll ans[502];
void solve(int n){
	vector<ll> v;
	queue<string> q;
	q.push("6");
	q.push("8");
	while(q.size()){
		string top = q.front(); q.pop();
		if((int)top.size() > n) break; 
		v.push_back(stoll(top));
		q.push(top + "6");
		q.push(top + "8");
	}
	reverse(v.begin(), v.end());
	cout << v.size() << endl;
	for(auto it:v)
		cout << it << " ";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		solve(n);
		cout << endl;
	}
	return 0;
}

