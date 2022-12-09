#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool no[1001];
vector<int> v[1001];

void DFS(int c){
	cout << c << " ";
	no[c] = false;
	sort(v[c].begin(), v[c].end());
	for(auto it:v[c]){
		if(no[it])
			DFS(it);
	}
}

int main(){
	memset(no, true, sizeof(no));
	int m, n, c; cin >> m >> n >> c;
	for(int i = 1; i <= n; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
	}
	DFS(c);
	return 0;
}

