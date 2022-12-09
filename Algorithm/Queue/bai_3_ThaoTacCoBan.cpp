#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

queue<int> q;
void solve(string s){
	if(s == "PUSHFRONT"){
		int x;
		vector<int> v;
		while(q.size()){
			v.push_back(q.front());
			q.pop();
		}
		cin >> x;
		q.push(x);
		for(auto it:v) q.push(it);
	}
	else if(s == "PRINTFRONT"){
		if(q.size()) cout << q.front() << endl;
		else cout << "NONE" << endl;
	}
	else if(s == "POPFRONT"){
		if(q.size()) q.pop();
	}
	else if(s == "PUSHBACK"){
		int x; cin >> x; 
		q.push(x);
	}
	else if(s == "PRINTBACK"){
		if(q.size()) cout << q.back() << endl;
		else cout << "NONE" << endl;
	}
	else{
		if(q.size()){
			vector<int> v;
			while(q.size() != 1){
				v.push_back(q.front());
				q.pop();
			}
			q.pop();
			for(auto it:v) q.push(it);
		}
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

