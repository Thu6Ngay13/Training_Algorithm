#include <bits/stdc++.h>
#include <fstream>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ofstream cout("ip.txt");
	srand(time(NULL));
	int n = rand() % (10-1+1) + 1;
	int a;
	cout << n << endl;
	for(int i = 1; i <= n; i++){
		a = rand() % (1000000000-1+1) + 1;
		cout << a << " ";
	}
	return 0;
}

