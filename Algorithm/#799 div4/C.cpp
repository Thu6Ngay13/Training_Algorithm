#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;

int di[4] = {-1, 1, -1, 1};
int dj[4] = {-1, -1, 1, 1};
void solve(char c[8][8]){
	for(int i = 1; i < 7; i++)
		for(int j = 1; j < 7; j++)
			if(c[i-1][j-1] == '#' && c[i+1][j+1] == '#'
			&& c[i-1][j+1] == '#' && c[i-1][j+1] == '#'){
				cout << i+1 << " " << j+1 << endl;
				return;
			}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int tt; cin >> tt;
	while(tt--){
		char c[8][8];
		for(int i = 0; i < 8; i++)
			for(int j = 0; j < 8; j++)
				cin >> c[i][j];
		solve(c);
	}
	return 0;
}

