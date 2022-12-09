#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1005;
const int MOD = 1e9 + 7;

int n;
int X[Max] = {0};

void init(int n, int X[]){
	for(int i = 0; i < n; i++)
		cout << X[i];
	cout << endl;
}

void sinh(int pos){
	if(pos == n) init(n, X);
	else{
		for(int j = 0; j <= 1; j++){
			X[pos] = j;
			sinh(pos+1);
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	sinh(0);
	return 0;
}

