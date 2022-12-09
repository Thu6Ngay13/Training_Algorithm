#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;

int gcd(int a, int b){
	while(b != 0){
		int tmp = a%b;
		b = tmp;
		a = b;
	}
	return a;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int tt; cin >> tt;
	while(tt--){
		priority_queue<int> q1;
		priority_queue<int> q2;
		int n; cin >> n;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			q1.push(x);
		}
		while(q1.size() > 1){
			int x = q1.top(); q1.pop();
			int y = q1.top(); q1.pop();
			q2.push(x-y);
			while(q1.size() > 0){
				x = y;
				y = q1.top(); q1.pop();
				q2.push(x-y);
			
			}
			q1 = q2;
			while(q2.size()) q2.pop();
		}
		cout << q1.top() << endl;
	}
	return 0;
}

