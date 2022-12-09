#include <bits/stdc++.h>
using namespace std;
const int Max = 100000;

int find(int a[], int l, int r, int x){
	int res = -1;
	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] < x){
			l = mid+1;
			res = mid;
		}
		else
			r = mid-1;
	}
	return res;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, k, a[Max], tmp = 0;
		cin >> n >> k;
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		for(int i = 0; i < n-1 && a[i] < k; i++){
			int res = find(a, i+1, n-1, k-a[i]);
			if(res != -1)
				tmp += res-i;
		}
		cout << tmp << endl;
	}
	return 0;
}
