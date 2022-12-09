#include <bits/stdc++.h> 
using namespace std;
using ll = long long;

ll p[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
int n;

ll Try(int pos, int count, ll x){
	if(count == n)
		return x;
	int i = 1;
	ll tmp = 1e18 + 5;
	while(!(x > tmp || count*(i+1) > n)){
		x *= p[pos];
		tmp = min(tmp, Try(pos+1, count*(i+1), x));
		i++;
	}
	return tmp;
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		cout << Try(0, 1, 1) << endl;
	}
	return 0;
}
