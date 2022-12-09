#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k, arr[Max];
		cin >> n >> k;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr+n);
		
		int tmp = n;
		for(int i = 1; i < n; i++){
			if(arr[i]-arr[i-1] <= k)
				tmp--;
		}
		cout << tmp << endl;
	}
	return 0;
}
