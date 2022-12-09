#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;

/*
5
4 5 8
2 3 
5 2 
3 5
1 6
*/
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int tt; cin >> tt;
	while(tt--){
		int n, h, m; cin >> n >> h >> m;
		int hh = 24, mm = 60;
		for(int i = 0; i < n; i++){
			int hi, mi; cin >> hi >> mi;
			int a = hi - h;
			int b = mi - m;
			if(b < 0){
				b += 60;
				a--;
			}
			if(a < 0) a += 24;
			if(a < hh || (a == hh && b < mm)){
				hh = a;
				mm = b;
			}
		}
		cout << hh << " " << mm << endl;
	}
	return 0;
}

