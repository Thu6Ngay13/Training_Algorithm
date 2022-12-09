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
		map<int, int> mp;
		int n; cin >> n;
		int A[n];
		for(int i = 0; i < n; i++)
			cin >> A[i];
		for(int i = n-1; i >=0; i--){
			mp[A[i]]++;
			if(mp[A[i]] > 1) break;
		}
		cout << n-mp.size() << endl;
	}
	return 0;
}

