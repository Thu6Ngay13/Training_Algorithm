#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, X[100];
vector<vector<int>> res;

void Try(int sum, int i, int value){
	if(sum == n){
		vector<int> tmp(X, X+i);
		res.push_back(tmp);
	}
	else
		for(int j = value; j > 0; j--){
			if(sum + j <= n){
				X[i] = j;
				Try(sum+j, i+1, j);
			}
		}
}

int main(){
	int t; cin >> t;
	while(t--){
		res.clear();
		cin >> n;
		Try(0, 0, n);
		cout << res.size() << endl;
		for(auto it:res){
			string s = "(";
			for(auto x:it)
				s += to_string(x) + " ";
			s.pop_back();
			s += ") ";
			cout << s;
		}
		cout << endl;
	}
	return 0;
}
