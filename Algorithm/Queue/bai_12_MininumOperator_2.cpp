#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 20003;

int solve(int s, int t){
	set<int> se;
	queue<pair<int, int>> q;
	q.push({s, 0});
	while(q.size()){
		pair<int, int> pi = q.front(); q.pop();
		if(pi.first == t) return pi.second;
		for(int i = 2; i <= (int)sqrt(pi.first); i++){
			if(pi.first % i == 0){
				int m = max(i, pi.first/i);
				if(!se.count(m)){
					q.push({m, pi.second+1}) 
					se.insert(m);
				}
			}
		}
		if(pi.first > 1 && !se.count(pi.first-1)){
			q.push({pi.first-1, pi.second+1});
			se.insert(pi.first-1);
		}
	}
	return 0;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int k; cin >> k;
	while(k--){
		int s; cin >> s;
		int t; cin >> t;
		cout << solve(s, t) << endl;
	}
	return 0;
}

