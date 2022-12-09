#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> v[1001];
bool no[1001];

void DFS(int a){
	no[a] = false;
	for(auto it:v[a]){
		if(no[it]){
			no[it] = false;
			DFS(it);
		}
	}
}

int main(){
	memset(no, true, sizeof(no));
	int m, n; cin >> m >> n;
	for(int i = 0; i < n; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
	}
	int ok = 1;
	for(int i = 1; i <= m && ok; i++){
		DFS(i);
		for(int j = 1; j <= m && ok; j++){
			if(no[j])
				ok = 0;
		}
		memset(no, true, sizeof(no));
	}
	cout << ok << endl;
	return 0;
}

