#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, s;
vector<int> v[1001];
bool no[1001];

void ip(){
	memset(no, true, sizeof(no));
	cin >> n >> m >> s;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
}

void bfs(int i){
	queue<int> q;
	q.push(i);
	no[i] = false;
	while(q.size()){
		int u = q.front(); q.pop();
		sort(begin(v[u]), end(v[u]));
		for(auto it:v[u])
			if(no[it]){
				q.push(it);
				no[it] = false;
				cout << u << "->" << it << endl;
			}
	}
}

void op(){
	bfs(s);
}

int main(){
	ip();
	op();
	return 0;
}

