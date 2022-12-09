#include <bits/stdc++.h> 
using namespace std;


int main(){
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for(auto &x:a) cin >> x;
	for(auto &x:b) cin >> x;
	int m1 = 0, m2 = 0;
	while(m1 < n && m2 < m){
		if(a[m1] < b[m2])
			cout << a[m1++] << " ";
		else
			cout << b[m2++] << " ";
	}
	while(m1 < n) cout << a[m1++] << " ";
	while(m2 < m) cout << b[m2++] << " ";
	cout << endl;
	return 0;
}
