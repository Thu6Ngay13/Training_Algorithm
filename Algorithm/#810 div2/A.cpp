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
		int n; cin >> n;
		if(n == 1) cout << 1;
		else if(n%2 == 0){
			for(int i = 1; i <= n; i++){
				if(i%2) cout << i+1 << " ";
				else cout << i-1 << " ";
			}
		}
		else{
			for(int i = 1; i <= n-3; i++){
				if(i%2) cout << i+1 << " ";
				else cout << i-1 << " ";
			}
			cout << n-1 << " "  << n << " " << n-2 ;
		}
		cout << endl;
	}
	return 0;
}

