#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 200005;
const int MOD = 1e9 + 7;

int n;
int A[MAX];
vector<int> v;
void solve(){
	v.push_back(A[0]);
	for(int i = 0; i < n; i++){
		auto it = lower_bound(v.begin(), v.end(), A[i]);
		if(it != v.end()) *it = A[i];
		else v.push_back(A[i]);
	}
	cout << v.size() << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	for(int i = 0; i < n; i++) cin >> A[i];
	solve();
	return 0;
}

