#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
using ll = long long;


int main(){
	int m, n; cin >> m >> n;
	vector<int> v[1001];
	for(int i = 0; i <  n; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i = 1; i <= m; i++){
		sort(v[i].begin(), v[i].end());
		cout << i << " :";
		for(auto it:v[i])
			cout << " " << it;
		cout << endl;
	}
	return 0;
}

