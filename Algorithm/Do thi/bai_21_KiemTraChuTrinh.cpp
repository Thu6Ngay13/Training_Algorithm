#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
vector<int> v[1001];
bool no[1001];

bool DFS(int i, int par){
	no[i] = false;
	for(auto it:v[i]){
		if(no[it]){
			if(DFS(it, i))
				return true;
		}
		else if(it != par)
			return true;
	}
	return false;
}

int main(){
	memset(no, true, sizeof(no));
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int ok = 0;
	for(int i = 1; i <= n; i++)
		if(no[i] && DFS(i, -1)){
			ok = 1;
			break;
		}
	cout << ok << endl;
	
	return 0;
}

