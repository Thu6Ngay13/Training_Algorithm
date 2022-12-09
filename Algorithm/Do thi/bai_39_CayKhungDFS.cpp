#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, s;
bool no[1001];
vector<int> v[1001];

void ip(){
	memset(no, true, sizeof(no));
	cin >> n >> m >> s;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
}

void dfs(int i){
	no[i] = false;
	sort(begin(v[i]), end(v[i]));
	for(auto it:v[i])
		if(no[it]){
			cout << i << "->" << it << endl;
			dfs(it);
		}
}

void op(){
	dfs(s);
}

int main(){
	ip();
	op();
	return 0;
}

