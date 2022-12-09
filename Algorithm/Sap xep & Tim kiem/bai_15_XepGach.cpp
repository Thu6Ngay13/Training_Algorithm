#include <bits/stdc++.h>
using namespace std;


int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a+n, greater<int>());
	int stand = a[0];
	int res = 1;
	for(int i = 1; i < n && stand; i++){
		res++;
		stand = min(stand-1, a[i]);
	}
	cout << res << endl;
	return 0;
}
