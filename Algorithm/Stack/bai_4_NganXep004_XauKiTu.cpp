#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

void solve(){
	string s; cin >> s;
	stack<char> st;
	int ans = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '(') st.push(s[i]);
		else if(st.size() && st.top() == '(') st.pop();
		else st.push(s[i]);
	}
	while(st.size()){
		char c2 = st.top(); st.pop();
		char c1 = st.top(); st.pop();
		if(c1 == ')' && c2 == '(') ans += 2;
		else ans++;
	}
	cout << ans << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}

