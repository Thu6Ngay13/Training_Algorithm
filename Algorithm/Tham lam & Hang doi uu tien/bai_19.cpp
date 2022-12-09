#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int t; cin >> t;
	while(t--){
		int x, y; cin >> x >> y;
		while(x != 0 && y != 0){
			x = x/__gcd(x, y);
			y = y/__gcd(x, y);
			int tmp = y/x + y%x!=0;
			cout << 1 << "/" << tmp << " ";
			x = x*tmp - y;
			y = y*tmp;
		}
		cout << endl;
	}
	return 0;
}

