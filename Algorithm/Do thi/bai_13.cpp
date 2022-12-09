#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> v[1001];
bool no[1001];

void DFS(int x){
	no[x] = false;
	for(auto it:v[x]){
		if(no[it])
			DFS(it);
	}
}

int check(int n){
	int tmp = 0;
	for(int i = 1; i <= n; i++)	
		if(no[i]){
			DFS(i);
			tmp++;
		}
	return tmp;
}

int main(){
	int n, m; cin >> n >> m;
	memset(no, true, sizeof(no));
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	cout << check(n);
	return 0;
}

