#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
vector<int> g[1001];
vector<int> tg[1001];
bool no[1001];
stack<int> st;

void dfs(int i){
	no[i] = false;
	for(auto it:g[i])
		if(no[it])
			dfs(it);
	st.push(i);
}

void kosaraju(int i){
	no[i] = true;
	for(auto it:tg[i])
		if(!no[it])
			kosaraju(it);
}

int main(){
	memset(no, true, sizeof(no));
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		g[x].push_back(y);
		tg[y].push_back(x);
	}
	
	for(int i = 1; i <= n; i++)
		if(no[i])
			dfs(i);
	
	int cnt = 0;
	while(st.size()){
		int i = st.top(); st.pop();
		if(!no[i]){
			kosaraju(i);
			cnt++;
		}
	}
	cout << (cnt == 1) << endl;
	return 0;
}

