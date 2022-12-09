#include <bits/stdc++.h>
using namespace std;
const int Max = 1005;
int main(){
	int t; cin >> t;
	while(t--){
		int n, arr[Max];
		cin >> n;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr+n);
		for(int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;n
	}
	return 0;
}
