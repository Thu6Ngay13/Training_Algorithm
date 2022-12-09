#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
vector<int> v[1001];
bool no[1001];
int r[1001];

void ip(){
	memset(no, true, sizeof(no));
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
}

void DFS(int u){
	no[u] = false;
	r[u] = v[u].size();
	for(auto it:v[u])
		if(no[it])
			DFS(it);
}

void op(){
	vector<int> ans;
	for(int i = 1; i <= n; i++)
		if(no[i]){
			memset(r, -1, sizeof(r));
			DFS(i);
			ans.push_back(max_element(r+1, r+n+1) - r);
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

