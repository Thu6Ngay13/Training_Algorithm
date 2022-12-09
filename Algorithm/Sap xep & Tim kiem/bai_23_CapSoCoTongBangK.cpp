#include <bits/stdc++.h>
using namespace std;
const int Max = 100000;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k, a[Max], tmp = 0;
		cin >> n >> k;
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		for(int i = 0 ; a[i] < k && i < n; i++)
			if(k-a[i] == *lower_bound(a+i+1, a+n, k-a[i]))
				tmp += (upper_bound(a, a+n, k-a[i])-lower_bound(a+i+1, a+n, k-a[i]));
		cout << tmp << endl;
	}
	return 0;
}
