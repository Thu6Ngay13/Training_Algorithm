#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

queue<int> q;
void solve(int x){
	if(x == 1){
		cout << q.size() << endl;
	}
	else if(x == 2){
		if(q.size()) cout << "NO" << endl;
		else cout << "YES" << endl;
	}
	else if(x == 3){
		int tmp; cin >> tmp;
		q.push(tmp);
	}
	else if(x == 4){
		if(q.size()) q.pop();
	}
	else if(x == 5){
		if(q.size()) cout << q.front() << endl;
		else cout << "-1" << endl;
	}
	else{
		if(q.size()) cout << q.back() << endl;
		else cout << "-1" << endl;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
	while(n--){
		int x; cin >> x;
		solve(x);
	}
	return 0;
}

