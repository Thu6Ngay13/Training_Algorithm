#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int n; cin >> n;
	vector<int> v[1001];
	cin.ignore();
	for(int i = 1; i <= n; i++){
		string s; getline(cin, s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			v[i].push_back(stoi(tmp));
		}
	}
	for(int i = 1; i <= n; i++){
		sort(v[i].begin(), v[i].end());
		for(auto it:v[i]){
			cout << i << " " << it << endl;
		}
	}
	return 0;
}

