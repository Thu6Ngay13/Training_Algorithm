#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, tmp = 0; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] == 0)
			tmp++;
	}
	for(auto x:a)
		if(x)
			cout << x << " ";
	for(int i = 0; i < tmp; i++)
		cout << 0 << " ";

	
	return 0;
}
	
