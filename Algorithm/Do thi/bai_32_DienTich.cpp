#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, cnt;
char a[1001][1001];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void ip(){
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
}

void dfs(int i, int j){
	cnt++;
	a[i][j] = '#';
	for(int k = 0; k < 4; k++){
		int i1 = i + dy[k];
		int j1 = j + dx[k];
		if(i1 >= 0 && j1 >= 0
		&& i1 < n && j1 < m && a[i1][j1] == '.')
			dfs(i1, j1);
	}
}

void op(){
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			if(a[i][j] == '.'){
				cnt = 0;
				dfs(i, j);
				cout << cnt << " ";
			}
}

int main(){
	ip();
	op();
	return 0;
}

