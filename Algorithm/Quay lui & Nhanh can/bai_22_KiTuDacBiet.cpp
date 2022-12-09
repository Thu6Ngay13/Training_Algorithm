#include <bits/stdc++.h>
using namespace std;
using ll = long long;

char Try(ll n, ll len, string s){
	if(len == s.size())
		return s[n-1];
	if(n > len/2)
		return Try((n-len/2-1 == 0)*len/2 + n-len/2-1, len/2, s);
	else
		return 
		Try(n, len/2, s);
}

int main(){
	int t; cin >> t;
	while(t--){
		string s;
		ll n;
		cin >> s >> n;
		ll len = s.size();
		while(len < n) 
			len *= 2;
		cout << Try(n, len, s) << endl;
	}
	return 0;
}
