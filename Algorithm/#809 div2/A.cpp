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
		int n, m; cin >> n >> m;
		int A[n]; for(int i = 0; i < n; i++) cin >> A[i];
		string s(m, 'B');
		for(int i = 0; i < n; i++){
			int x = min(A[i], m+1-A[i])-1;
			int y = max(A[i], m+1-A[i])-1;
			if(s[x] == 'B') s[x] = 'A';
			else s[y] = 'A';
		}
		cout << s << endl;
	}
	return 0;
}

