#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

string solve(){
	string s; cin >> s;
	stack<string> st;
	for(int i = 0; i < s.size(); i++){
		if(isalpha(s[i])) st.push(string(1, s[i]));
		else{
			string op1 = st.top(); st.pop();
			string op2 = st.top(); st.pop();
			string ex = '(' + op2 + s[i] + op1 + ')';
			st.push(ex);
		}
	}
	return st.top();
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t; cin >> t;
	while(t--){
		cout << solve() << endl;
	}
	return 0;
}

