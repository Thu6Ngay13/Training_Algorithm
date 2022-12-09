#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int n, arr[Max], X[Max];
set<vector<int>> se;
void Try(int i, int pos){
	if(i > 1){
		vector<int> vec(X, X+i);
		se.insert(vec);
	}
	for(int j = pos; j < n; j++){
		if(X[i-1] < arr[j]){
			X[i] = arr[j];
			Try(i+1, j+1);
		}
	}
}

int main(){
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	Try(0, 0);
	for(auto it:se){
		for(auto x:it)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}	

