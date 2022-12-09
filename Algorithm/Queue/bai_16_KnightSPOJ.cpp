#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

void solve(int a, int b, int x, int y){
	int path[9][9]; memset(path, 0, sizeof(path));
	bool no[9][9]; memset(no, true, sizeof(no));
	queue<pair<int, int>> q;
	q.push({a, b});
	path[a][b] = 0;
	no[a][b] = false;
	while(q.size()){
		pair<int, int> top = q.front(); q.pop();
		for(int k = 0; k < 8; k++){
			int i1 = top.first + dy[k];
			int j1 = top.second + dx[k];
			if(i1 > 0 && j1 > 0 && i1 <= 8 && j1 <= 8 && no[i1][j1]){
				path[i1][j1] = path[top.first][top.second] + 1;
				no[i1][j1] = false;
				q.push({i1, j1});
			}
		}
	}
	cout << path[x][y] << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t; cin >> t;
	while(t--){
		string s, e; cin >> s >> e;
		int a = s[1] - '0'; //cot
		int b = s[0] - 'a' + 1; //hang
		int x = e[1] - '0'; //cot
		int y = e[0] - 'a' + 1; //hang
		solve(a, b, x, y);
	}
	return 0;
}

