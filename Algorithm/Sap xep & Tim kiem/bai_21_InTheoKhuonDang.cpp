#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int main(){
	int t; cin >> t;
	while(t--){
		int n, arr[Max];
		cin >> n;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr+n);
		
		int l = 0, r = n-1;
		while(l < n){
			if(l%2)
				cout << arr[l/2] << " ";
			else
				cout << arr[r--] << " ";
			l++; 
		}
		cout << endl;
	}
	return 0;
}
