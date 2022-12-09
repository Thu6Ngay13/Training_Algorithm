#include <iostream>
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
		int A[n];
		for(int i = 0; i < n; i++) cin >> A[i];
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			string s; cin >> s;
			for(int j = 0; j < x; j++){
				if(s[j] == 'D') A[i]++;
				else A[i]--;
			}
		}
		for(int i = 0; i < n; i++)
			cout << (A[i] % 10 + 10) % 10 << " ";
		cout << endl;
	}
	return 0;
}

