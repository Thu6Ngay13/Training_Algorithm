#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

stack<int> st;
void solve(string s){
	if(s == "push"){
		int x; cin >> x;
		st.push(x);
	}
	else if(s == "show"){
		stack<int> tmp = st;
		string res = "";
		while(tmp.size()){
			res += to_string(tmp.top()) + " ";
			tmp.pop();
		}
		res.pop_back();
		reverse(begin(res), end(res));
		cout << res << endl;
	}
	else st.pop();
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n; cin >> n;
	while(n--){
		string s; cin >> s;
		solve(s);
	}
	return 0;
}

