#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

void solve(string s){
	string ans = "";
	stack<char> kt;
	stack<string> chuoi;
	for(int i = s.size()-1; i >= 0; i--){
		if(!isalpha(s[i])){
			kt.push(s[i]);
		}
		else{
 			chuoi.push(string(1, s[i]));
		}
	}
	while(kt.size()){
		string o1 = chuoi.top(); chuoi.pop();
		string o2 = chuoi.top(); chuoi.pop();
		char k1 = kt.top(); kt.pop();
		string ex = o1 + k1 + o2;
		chuoi.push(ex);
	}
	cout << chuoi.top() << endl;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	string s; cin >> s;
	solve(s);
	return 0;
}

