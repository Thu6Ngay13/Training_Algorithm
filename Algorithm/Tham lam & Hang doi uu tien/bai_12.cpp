#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int t; cin >> t; 
	while(t--){
		string s; cin >> s;
		map<char, int> mp;
		for(int i = 0; i < s.size(); i++)
			mp[s[i]]++;
		int a[mp.size()];
		int max_fre = 0;
		for(auto it:mp)
			max_fre = max(max_fre, it.second);
		if(max_fre < s.size()-max_fre)
			cout << 1 << endl;
		else
			cout << -1 << endl;
			
	}
	
	return 0;
}

