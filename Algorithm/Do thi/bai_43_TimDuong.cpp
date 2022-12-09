#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 501;

int n, m;
int x_1, y_1, x_2, y_2, ok = false;
char a[Max][Max];

void ip(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
			if(a[i][j] == 'S'){
				x_1 = i;
				y_1 = j;
			}
			if(a[i][j] == 'T'){
				x_2 = i;
				y_2 = j;
			}
		}
	}
}

char path[4] = {'U', 'R', 'D', 'L'};
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void dfs(int i, int j, int cnt, char check){
	if(cnt > 2) return;
	if(i == x_2 && j == y_2){
		ok = true;
		return;
	}
	for(int k = 0; k < 4; k++){
		int i1 = i + dy[k];
		int j1 = j + dx[k];
		if(i1 >= 0 && j1 >= 0 && i1 < n && j1 < m 
		&& a[i1][j1] == '.' || a[i1][j1] == 'T'){
			a[i1][j1] = '*';
			if(check != path[k] && check != '?') dfs(i1, j1, cnt+1, path[k]);
			else dfs(i1, j1, cnt, path[k]);
			a[i1][j1] = '.';
		}
	}
}

void op(){
	dfs(x_1, y_1, 0, '?');
	if(ok) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ip();
	op();
	return 0;
}

