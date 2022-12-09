#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
//	ofstream op("op.txt");
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int p; cin >> p;
		int sum = 0;
		int A[27] = {0};
		for(int i = 0; i < s.size(); i++){
			int x = s[i]-'a'+1;
			A[x]++;
			sum += x;
		}
		for(int i = 26; i > 0; i--){
			while(A[i] && sum > p){
				sum -= i;
				A[i]--;
			}
			if(sum <= p) break;
		}
		for(int i = 0; i < s.size(); i++){
			int x = s[i]-'a'+1;
			if(A[x] > 0){
				A[x]--;
				cout << s[i];
			}	
		}
		cout << endl;
	}
	return 0;
}

