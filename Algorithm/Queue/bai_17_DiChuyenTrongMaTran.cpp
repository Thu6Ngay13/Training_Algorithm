#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

struct path{
	int i, j, w;
};

int solve(int m, int n, int A[][Max]){
	queue<path> q;
	set<pair<int, int>> se;
	q.push({0, 0});
	while(q.size()){
		path top = q.front(); q.pop();
		int i = top.i;
		int j = top.j;
		int w = top.w;
		if(i == m-1 && j == n-1) return w;
		if(i+A[i][j] < m && !se.count({i+A[i][j], j})){
			q.push({i+A[i][j], j, w+1});
			se.insert({i+A[i][j], j});
		}
		if(j+A[i][j] < n && !se.count({i, j+A[i][j]})){
			q.push({i, j+A[i][j], w+1});
			se.insert({i, j+A[i][j]});
		}
	}
	return -1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t; cin >> t;
	while(t--){
		int m, n, A[Max][Max];
		cin >> m >> n;
		for(int i = 0; i < m; i++)
			for(int j = 0; j < n; j++)
				cin >> A[i][j];
		cout << solve(m, n, A) << endl;
	}
	return 0;
}

