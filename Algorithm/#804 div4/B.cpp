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
		int A[26] = {0};
		int n; cin >> n;
		string s; cin >> s;
		int sum = 0;
		for(int i = 0; i < n; i++){
			if(A[s[i]-'A']) sum++;
			else{
				A[s[i]-'A']++;
				sum += 2;
			} 
		}
		cout << sum << endl;
	}
	return 0;
}

