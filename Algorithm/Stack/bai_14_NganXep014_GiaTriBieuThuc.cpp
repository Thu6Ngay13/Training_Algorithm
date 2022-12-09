#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

int value(string a, string b, char c){
	if(c == '^') return pow(stoi(a), stoi(b));
	if(c == '*') return stoi(a) * stoi(b);
	if(c == '/') return stoi(a) / stoi(b);
	if(c == '+') return stoi(a) + stoi(b);
	if(c == '-') return stoi(a) - stoi(b);
}

string solve(){
	string s; cin >> s;
	stack<string> st;
	for(int i = s.size()-1; i >= 0; i--){
		if(isdigit(s[i])) st.push(string(1, s[i]));
		else{
			string op1 = st.top(); st.pop();
			string op2 = st.top(); st.pop();
			string ex = to_string(value(op1, op2, s[i]));
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

