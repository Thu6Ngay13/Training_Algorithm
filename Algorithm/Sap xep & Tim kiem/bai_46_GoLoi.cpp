#include <bits/stdc++.h>
using namespace std;


int main(){
	int n; cin >> n;
	int a[n], b[n-1], c[n-2];
	for(auto &x:a) cin >> x;
	for(auto &x:b) cin >> x;
	for(auto &x:c) cin >> x;
	sort(a, a+n);
	sort(b, b+n-1);
	sort(c, c+n-2);
	bool ok1 = true, ok2 = true;
	int value1 = a[n-1], value2 = b[n-2];
	for(int i = 0; i < n-1 && ok1; i++)
		if(a[i] != b[i]){
			ok1 = false;
			value1 = a[i];
		}
	for(int i = 0; i < n-2 && ok2; i++)
		if(b[i] != c[i]){
			ok2 = false;
			value2 = b[i];
		}
	cout << value1 << " " << value2 << endl;
	
	return 0;
}
