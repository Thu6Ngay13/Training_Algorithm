#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int main(){
	int n, x, arr[Max], ok = 0; cin >> n >> x;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int l = 0, r = n-1;
	while(l <= r && !ok){
		int mid = (l+r)/2;
		if(arr[mid] == x)
			ok = 1;
		else if(arr[mid] < x)
			l = mid+1;
		else
			r = mid-1;
	}
	cout << ok << endl;
	return 0;
}
