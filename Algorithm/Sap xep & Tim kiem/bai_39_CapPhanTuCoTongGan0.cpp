#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		int tmp;
		int l = 0, r = n-1;
		while(l < r){
			tmp = a[l] + a[r];
			if(abs(a[l] + a[r-1]) < abs(tmp) 
			&& l != r-1){
				r--;
			}
			else if(abs(a[l+1] + a[r]) < abs(tmp) 
			&& l+1 != r)
				l++;
			else{
				l++;
				r--;
			}
		}
		cout << tmp << endl;
	}
	return 0;
}
