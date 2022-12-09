#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
int a[1001][1001];
int dy[4] = {-1, 0, 1, 0}; //i
int dx[4] = {0, 1, 0, -1}; //j

void ql(int i, int j){
	a[i][j] = 0;
	for(int k = 0; k < 4; k++){
		int j1 = j + dx[k];
		int i1 = i + dy[k];
		if(i1 >= 0 && j1 >= 0 
		&& i1 < n && j1 < m 
		&& a[i1][j1])	
			ql(i1, j1);
	}
}

void ip(){
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++){
			char x; cin >> x;
			if(x == '.')	
				a[i][j] = 1;
			else
				a[i][j] = 0;
		}
}

void op(){
	int tmp = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++){
			if(a[i][j]){
				ql(i, j);
				tmp++;
			}
		}
	cout << tmp << endl;
}

int main(){
	ip();
	op();
	return 0;
}

