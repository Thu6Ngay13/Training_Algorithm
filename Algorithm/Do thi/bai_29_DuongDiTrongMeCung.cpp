#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int a[1002][1002], n, s, t, u, v;
int d[1002][1002];
int dx[8] = {0, 1, 0, -1, -1, -1, 1, 1};
int dy[8] = {1, 0, -1, 0, -1, 1, -1, 1};
void ip(){
	cin >> n >> s >> t >> u >> v;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin >> a[i][j];
}

int bfs(int i, int j){
	queue<pair<int, int>> q;
	q.push({i, j});
	a[i][j] = 0;
	d[i][j] = 0;
	while(q.size()){
		pair<int, int> pi = q.front(); q.pop();
		for(int k = 0; k < 8; k++){
			int i1 = pi.first + dy[k];
			int j1 = pi.second + dx[k];
			if(i1 > 0 && j1 > 0
			&& i1 <= n && j1 <= n
			&& a[i1][j1]){
				d[i1][j1] = d[pi.first][pi.second] + 1;
				if(i1 == u && j1 == v)
					return d[i1][j1];
				q.push({i1, j1});
				a[i1][j1] = 0;
			}
		}
	}
	return -1;
}

void op(){
	cout << bfs(s, t) << endl;
}
int main(){
	ip();
	op();
	return 0;
}

