#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> v[1001];
bool no[1001];
int height[1001];

void DFS(int a, int h){
	no[a] = false;
	height[a] = h;
	for(auto it:v[a])
		if(no[it])
			DFS(it, h+1);
}

//7
//1 2
//2 3
//3 4
//1 5
//5 6
//1 7

int main(){
	memset(no, true, sizeof(no));
	int n; cin >> n;
	for(int i = 0; i < n-1; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	DFS(1, 0);
	for(int i = 1; i <= n; i++)
		cout << height[i] << " ";
	return 0;
}

