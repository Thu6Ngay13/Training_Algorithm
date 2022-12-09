#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a+n);
	ll sum = 1, ok = true;
	for(int i = 0; i < n && ok; i++)
		if(a[i] > sum){
			cout << sum << endl;
			ok = false;
		}
		else
			sum += 1ll*a[i];
	if(ok)
		cout << sum << endl;
	return 0;
}

