#include <bits/stdc++.h>
using namespace std;
const int Max = 354321;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, arr[Max];
		cin >> n >> m;
		for(int i = 0; i < n+m; i++)
			cin >> arr[i];
		sort(arr, arr+m+n);
		for(int i = 0; i < n+m; i++)
			cout << arr[i];
	}
	return 0;
}
