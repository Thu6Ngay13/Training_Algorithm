#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1000005;
const int MOD = 1e9 + 7;

int n;
int dp[MAX];
void solve(){
	memset(dp, 0, sizeof(dp));
	queue<int> q;
	q.push(n);
	while(q.size()){
		int top = q.front(); q.pop();
		int tmp = top;
		while(tmp){
			int res = top - tmp%10;
			if(res != top && dp[res] > dp[top]+1) dp[res] = dp[top] + 1;
			else if(res != top && !dp[res]){
				dp[res] = dp[top] + 1;
				q.push(res);
			}
			tmp /= 10;
			if(!res){
				cout << dp[0] << endl;
				return;
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	solve();
	return 0;
}

