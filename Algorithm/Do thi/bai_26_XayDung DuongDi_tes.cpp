#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
vector<int> v[1001];
bool no[1001];

void ip(){
	memset(no, true, sizeof(no));
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
}

void dfs(int i){
	no[i] = false;
	for(auto it:v[i])
		if(no[it])
			dfs(it);
}

void op(){
	vector<int> ans;
	for(int i = 1; i <= n; i++)
		if(no[i]){
			dfs(i);
			ans.push_back(i);
		}
	int k = ans.size();
	cout << k-1 << endl;
	for(int i = 0; i < k-1; i++)
		cout << ans[i] << " " << ans[i+1] << endl;
}

int main(){
	ip();
	op();
	return 0;
}

