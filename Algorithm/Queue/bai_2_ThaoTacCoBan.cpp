#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

queue<int> q;
void solve(string s){
	if(s == "PUSH"){
		int x; cin >> x;
		q.push(x);
	}
	else if(s == "PRINTFRONT"){
		if(q.size()) cout << q.front() << endl;
		else cout << "NONE" << endl;
	}
	else if(s == "POP"){
		if(q.size()) q.pop();
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
	while(n--){
		string s; cin >> s;
		solve(s);
	}
	return 0;
}

