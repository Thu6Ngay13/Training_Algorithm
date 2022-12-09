#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

vector<int> ans;
void bfs(){
	queue<int> q;
	for(int i = 1; i < 6; i++) q.push(i);
	while(q.size()){
		int top = q.front(); q.pop();
		ans.push_back(top);
		if(top > 100000) break;
		bool no[6]; memset(no, true, sizeof(no));
		int tmp = top;
		while(tmp){
			no[tmp%10] = false;
			tmp /= 10;
		}
		for(int i = 0; i < 6; i++){
			if(no[i]) q.push(top*10 + i);
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	bfs();
	int t; cin >> t;
	while(t--){
		int l, r; cin >> l >> r;
		int cnt = 0;
		for(int i = 0;; i++){
			if(ans[i] >= l && ans[i] <= r) cnt++;
			else if(ans[i] > r) break;
		}
		cout << cnt << endl;
	}
	return 0;
}

