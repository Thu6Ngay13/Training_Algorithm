#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
vector<int> v[1001];
bool no[1001];
int res, value;

void ip(){
	memset(no, 1, sizeof(no));
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
}

void DFS(int u){
	no[u] = false;
	if((int)v[u].size() > res){
		res = v[u].size();
		value = u;
	}
	for(auto it:v[u])
		if(no[it])
			DFS(it);
}

void op(){
	for(int i = 1; i <= n; i++)	
		if(no[i]){
			value = i;
			res = 0;
			DFS(i);
			cout << value << " ";
		}
}

int main(){
	ip();
	op();
	return 0;
}

