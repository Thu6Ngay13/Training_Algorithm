#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m; 
vector<int> v[1001];
int color[1001];

bool DFS(int i, int par){
	color[i] = 3 - color[par];
	for(auto it:v[i]){
		if(color[it] == 0){
			if(DFS(it, i))
				return true; //khong 2 phia
		}
		else if(color[it] == color[i])
			return true; //khong 2 phia
	}
	return false; //phai hai phia
}

int main(){
	memset(color, 0, sizeof(color));
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int ok = false;
	color[0] = 2;
	for(int i = 1; i <= n; i++)
		if(!color[i] && DFS(i, 0)){
			ok = true;
			break;
		}
	string ans = ok?"NO":"YES";
	cout << ans << endl;
	return 0;
}

