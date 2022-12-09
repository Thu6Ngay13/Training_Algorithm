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
		int A[4]; for(int i = 0;  i < 4; i++) cin >> A[i];
		int K[4] = {0}, Ok = 1;
		K[A[0]] = true;
		K[A[A[0]]] = true;
		K[A[A[A[0]]]] = true;
		K[A[A[A[A[0]]]]] = true;
		for(int i = 1; i < 4; i++) if(!K[i]) Ok = false;
		if(Ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

