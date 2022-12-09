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
		string s[n];
		for(int i = 0; i < n; i++)	
			cin >> s[i];
		int sum = 0;
		for(int k = 0; k < n/2; k++)
			for(int i = k; i < n-1-k; i++){
				int x = (s[k][i]-'0') 
				+(s[i][n-1-k]-'0') 
				+(s[n-1-k][n-i-1]-'0')
				+(s[n-1-i][k]-'0');
				sum += min(4-x, x);
			}
		cout << sum << endl;
	}
	return 0;
}

