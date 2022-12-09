#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		string s = "";
		for(int i = n/7; i > 0; i--){
			if((n-i*7)%4 == 0){
				s += string((n-i*7)/4, '4');
				s += string(i, '7');
				break;
			}
		}
		if(s.size())
			cout << s << endl;
		else
			cout << -1 << endl;
		
	}
	return 0;
}

