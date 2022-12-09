#include <bits/stdc++.h>
using namespace std;
const int Max = 354321;

int main(){
	int t; cin >> t;
	while(t--){
		int n, arr[Max];
		cin >> n;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr+n);
		int tmp = 0;
		for(int i = 1; i < n; i++)
			tmp += (arr[i]-arr[i-1]-1)*(arr[i]-arr[i-1] != 1);
		cout << tmp << endl;
	}
	return 0;
}
