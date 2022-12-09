#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool no[1001];
vector<int> v[1001];
void BFS(int s){
	queue<int> q;
	no[s] = false;
	q.push(s);
	while(q.size()){
		int tmp = q.front(); q.pop();
		cout << tmp << " ";
		sort(v[tmp].begin(), v[tmp].end());
		for(auto it:v[tmp]){
			if(no[it]){
				q.push(it);
				no[it] = false;
			}
		}
	}
}

int main(){
	memset(no, true, sizeof(no));
	int m, n, s; cin >> m >> n >> s;
	for(int i = 0; i < n; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
	}
	BFS(s);
	return 0;
}

