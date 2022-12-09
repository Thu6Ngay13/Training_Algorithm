#include <bits/stdc++.h>
using namespace std;
const int Max = 123456;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		int l = 0, r = 0;
		for(int i = 0; i < n-1; i++) 
			if(a[i] > a[i+1]){
				l = i;
				break;
			}
		for(int i = n-1; i >= 0; i--)
			if(a[i-1] > a[i]){
				r = i;
				break;
			}
		int ma = *max_element(a+l, a+r+1);
		int mi = *min_element(a+l, a+r+1);
		for(int i = 0; i < n; i++)
			if(a[i] > mi){
				l = i;
				break;
			}
		for(int i = n-1; i >= 0; i--)
			if(a[i] < ma){
				r = i;
				break;
			}
		cout << l+1 << " " << r+1 << endl;
	}
	return 0;
}
