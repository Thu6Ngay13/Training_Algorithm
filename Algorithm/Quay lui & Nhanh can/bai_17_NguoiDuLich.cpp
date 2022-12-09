#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int n, arr[Max][Max], X[Max], no[Max], toiuu, mi, res;

void Try(int i){
	for(int j = 2; j <= n; j++){
		if(no[j]){
			no[j] = 0;
			X[i] = j;
			res += arr[X[i-1]][X[i]]; //di tu X[i-1] den X[i]
			if(i == n) toiuu = min(toiuu, res + arr[X[n]][1]);
			else if(res + mi*(n-i+1) < toiuu) Try(i+1);
			no[j] = 1;
			res -= arr[X[i-1]][X[i]];
		}
	}
}

int main(){
	memset(no, 1, sizeof(no));
	toiuu = 1e9 + 5;
	mi = 1e9 + 5;
	res = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++){
			cin >> arr[i][j];
			if(arr[i][j])
				mi = min(mi, arr[i][j]);
		}
	X[1] = 1;
	no[1] = 0;
	Try(2);
	cout << toiuu << endl;	
			
	return 0;
}
