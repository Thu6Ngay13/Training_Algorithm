#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int t; cin >> t;
	while(t--){
		int k; cin >> k;  cin.ignore();
		string s; getline(cin, s);
		map<char, int> mp;
		priority_queue<int> Q;
		for(int i = 0; i < s.size(); i++)
			mp[s[i]]++;
		for(auto it:mp)
			Q.push(it.second);
		while(k && Q.size()){
			int tmp = Q.top(); Q.pop();
			if(k >= tmp)
				k -= tmp;
			else{
				Q.push(tmp-k);
				k = 0; 
			}
		}
		ll ans = 0;
		while(Q.size()){
			ans += Q.top()*Q.top();
			Q.pop();
		}
		cout << ans << endl;
	}
	return 0;
}

