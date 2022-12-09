#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
vector<int> v[1001];
bool no[1001];
int son[1001];

void ip(){
	memset(no, true, sizeof(no));
	memset(son, 0, sizeof(son));
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
}

void dfs(int i){
	no[i] = false;
	son[i] = (int)v[i].size();
	for(auto it:v[i])
		if(no[it])
			dfs(it);
}

void op(){
	int res, value;
	vector<int> ans;
	for(int i = 1; i <= n; i++)
		if(no[i]){
			dfs(i);
			res = 0, value = i;
			for(int j = 1; j <= n; j++){
				if(son[j] > res){
					res = son[j];
					value = j;
				}
				son[j] = 0;
			} 
			ans.push_back(value);
		}
	sort(begin(ans), end(ans));
	for(auto it:ans)
		cout << it << " ";
}

int main(){
	ip();
	op();
	return 0;
}

