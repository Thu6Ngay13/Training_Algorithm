#include <bits/stdc++.h> 
using namespace std;
const int Max = 100;


int main(){
	int t; cin >> t;
	while(t--){
		int n, x, a[Max], vitri = -1;
		cin >> n >> x;
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		int l = 0, r = n-1;
		while(l <= r){
			int mid = (l+r)/2;
			if(a[mid] == x){
				vitri = mid + 1;
				r = mid - 1;
			}
			else if(a[mid] < x)
				l = mid + 1;
			else
				r = mid - 1;
		}
		cout << vitri << endl;
	}
	return 0;
}
