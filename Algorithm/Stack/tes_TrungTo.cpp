#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;

int priority(char c){
	if(c == '^') return 4;
	if(c == '*' || c == '/') return 3;
	if(c == '+' || c == '-') return 2;
	return 1;
}
string S;
void solve(){
	string ans = "";
	stack<char> st;
	for(int i = 0; i < S.size(); i++){
		if(isalpha(S[i])) ans += S[i];
		else if(S[i] == '(') st.push(S[i]);
		else if(S[i] == ')'){
			while(st.size() && st.top() != '('){
				ans += st.top();
				st.pop();
			}
			st.pop();
		}
		else{
			while(st.size() && priority(S[i]) <= priority(st.top())){
				ans += st.top();
				st.pop();
			}
			st.push(S[i]);
		}
	}
	while(st.size()){
		ans += st.top();
		st.pop();
	}
	cout << ans << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> S;
	solve();
	return 0;
}

