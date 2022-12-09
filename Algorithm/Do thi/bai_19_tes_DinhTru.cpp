#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m; 
vector<int> v[1001];
bool no[1001];

void ip(){
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
	int cnt1 = 0;
	memset(no, true, sizeof(no));
	for(int i = 1; i <= n; i++)
		if(no[i]){
			dfs(i);
			cnt1++;
		};
	int ans = 0;
	for(int i = 1; i <= n; i++){
		memset(no, true, sizeof(no));
		no[i] = false;
		int cnt2 = 0;
		for(int j = 1; j <= n; j++){
			if(no[j]){
				dfs(j);
				cnt2++;
			}
		}
		ans += (cnt2 > cnt1);
	}
	cout << ans << endl;
}

int main(){
	ip();
	op();
	return 0;
}











