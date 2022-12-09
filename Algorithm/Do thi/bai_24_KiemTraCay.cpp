#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
vector<int> v[1001];
bool no[1001];

void DFS(int i){
	no[i] = false;
	for(auto it:v[i])
		if(no[it])
			DFS(it);
}

int main(){
	memset(no, true, sizeof(no));
	cin >> n >> m; 
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	DFS(1);
	int ok = (n == m+1);
	for(int i = 1; i <= n; i++)
		if(no[i]){
			ok = false;
			break;
		}
	cout << ok << endl;
	return 0;
}

