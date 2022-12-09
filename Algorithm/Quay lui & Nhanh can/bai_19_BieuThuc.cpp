#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

vector<vector<int>> vec1, vec2;
int arr[6], X[5], Y[6], no[6];

void Try_1(int i){
	if(i == 5){
		vector<int> res;
		for(int j = 1; j <= 4; j++){
			res.push_back(X[j]);	
		}
		vec1.push_back(res);
	}
	else
		for(int j = 1; j <= 3; j++){
			X[i] = j;
			Try_1(i+1);
		}
}

void Try_2(int i){
	if(i == 6){
		vector<int> res;
		for(int i = 1; i <= 5; i++){
			res.push_back(Y[i]);	
		}
		vec2.push_back(res);
	}
	else
		for(int j = 1; j <= 5; j++){
			if(no[j]){
				no[j] = 0;
				Y[i] = j;
				Try_2(i+1);
				no[j] = 1;
			}
		}
}

bool check(){
	for(auto x:vec1){
		for(auto y:vec2){
			int res = arr[y[0]];
			for(int i = 0; i <= 3; i++){
				if(x[i] == 1)
					res += arr[y[i+1]];
				else if(x[i] == 2)
					res -= arr[y[i+1]];
				else
					res *= arr[y[i+1]];
			}
			if(res == 23){
				return true;
			}
		}
	}
	return false;
}

int main(){
	memset(no, 1, sizeof(no));
	Try_1(1);
	Try_2(1);
	int t; cin >> t;
	while(t--){
		for(int i = 1; i <= 5; i++)			
			cin >> arr[i];
		if(check()) 	
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
