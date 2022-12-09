#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n;
	ll a[n], b[n];
	for(int i = 0; i < n; i++)	
		cin >> a[i];
	for(int i = 0; i < n; i++)
		cin >> b[i];
	sort(a, a+n);
	sort(a, a+n, greater<ll>());
	ll tmp = 0;
	for(int i = 0; i < n; i++)
		tmp += a[i]*b[i];
	cout << tmp << endl;
	return 0;
}

