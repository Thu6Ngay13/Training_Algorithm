#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1000005;

int n, dp[Max];

void solve(){
	memset(dp, 0, sizeof(dp));
	queue<int> q;
	q.push(n);
	dp[n] = 0;
	while(q.size()){
		int top = q.front(); q.pop();
		int tmp = top;
		while(tmp){
			int res = top - tmp%10;
			if(res != top && dp[res] > dp[top] + 1) dp[res] = dp[top] + 1;
            else if(res != top && !dp[res]){
                q.push(res);
                dp[res] = dp[top] + 1;
            }
			tmp /= 10;
			if(!res){
				cout << dp[res] << endl;
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


