#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

string n;
void solve(){
	ll dp = 0;
	for(int i = 0; i < (int)n.size(); i++)
		for(int j = 0; j < (int)n.size()-i; j++){
			dp += stoll(n.substr(j, i+1));
			cout << n.substr(j, i+1) << endl;
		}
	cout << dp << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	solve();
	return 0;
}

