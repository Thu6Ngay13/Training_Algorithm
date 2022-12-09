#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int n; cin >> n; 
	vector<int> v[n+1];
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++){
			int x; cin >> x;
			if(x)
				v[i].push_back(j);
		}
	for(int i = 1; i <= n; i++){
		for(auto it:v[i])
			cout << i << " " << it << endl;
	}
	cout << endl;
	for(int i = 1; i <= n; i++){
		cout << i << " :";
		for(auto it:v[i])
			cout << " " << it;
		cout << endl;
	}
	return 0;
}

