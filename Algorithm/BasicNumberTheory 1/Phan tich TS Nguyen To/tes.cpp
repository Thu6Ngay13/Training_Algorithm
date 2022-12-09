#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1005;
const int MOD = 1e9 + 7;

string S, T;
void solve(){
	string ans = "";
	stack<char> st;
	int value = 1;
	for(int i = 0; i < S.size(); i++){
		if(i != S.size() - 1 && S[i] == S[i+1]) st.push(S[i]);
		else{
			else if(st.top() == '>'){
				st.push(S[i]);
				value = st.size() + 1;
				while(st.size()){
					ans += to_string(value--) + st.top();
					st.pop();
				}
			}
			else{
				st.push(S[i]);
				value = 1;
				while(st.size()){
					ans += to_string(value++) + st.top();
					st.pop();
				}
			}
		}
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

