#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int n; cin >> n;
	int a[n+1][n+1];
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin >> a[i][j];
	vector<int> v[1001];
	for(int i = 1; i <= n; i++)
		for(int j = 1; j < i;  j++)
			if(a[i][j]){
				cout << i << " " << j << endl;
				v[i].push_back(j);
				v[j].push_back(i);
			}
	cout << endl;
	for(int i = 1; i <= n; i++){
		cout << i << " :";
		sort(v[i].begin(), v[i].end());
		for(auto it:v[i])
			cout << " " << it;
		cout << endl;
	}
	return 0;
}

