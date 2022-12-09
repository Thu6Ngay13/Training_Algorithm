#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;

void solve(int n){
	int A[11] = {0};
	int i = 9;
	string str = "";
	while(n > 0){
		if(n > i){
			str = to_string(i) + str;
			n -= i;
			i--;
		}
		else{
			str = to_string(n) + str;
			n = 0;
		}
	}
	cout << str << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int tt; cin >> tt;
	while(tt--){
		int n; cin >> n;
		solve(n);
	}
	return 0;
}

