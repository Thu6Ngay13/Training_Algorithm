#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

string solve(){
	string s, ans = ""; cin >> s;
	stack<string> st;
	for(int i = s.size()-1; i >= 0; i--){
		if(isalpha(s[i])) st.push(string(1, s[i]));
		else{
			string op1 = st.top(); st.pop();
			string op2 = st.top(); st.pop();
			string ex = '(' + op1 + s[i] + op2 + ')';
			st.push(ex);
		}
	}
	return st.top();
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cout << solve() << endl;
	return 0;
}

