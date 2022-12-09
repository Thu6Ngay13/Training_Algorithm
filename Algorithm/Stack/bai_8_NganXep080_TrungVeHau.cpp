#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

int priority(char c){
	if(c == '^') return 3;
	if(c == '*' || c == '/') return 2;
	if(c == '+' || c == '-') return 1;
	return 0;
}

string solve(){
	string s; cin >> s;
	string ans = "";
	stack<char> st;
	for(int i = 0; i < s.size(); i++){
		if(isalpha(s[i])) ans += s[i];
		else if(s[i] == '(') st.push(s[i]);
		else if(s[i] == ')'){
			while(st.size() && st.top() != '('){
				ans += st.top();
				st.pop();
			}
			st.pop();
		}
		else{
			while(st.size() && priority(s[i]) <= priority(st.top())){
				ans += st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while(st.size()){
		ans += st.top();
		st.pop();
	}
	return ans;
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

