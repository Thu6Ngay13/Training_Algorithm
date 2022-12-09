#include <bits/stdc++.h> 
using namespace std;
const int Max = 100000;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		ll n, m, arr[Max], brr[Max], tmp = 0;
		cin >> n >> m;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		for(int i = 0; i < m; i++)
			cin >> brr[i];
		sort(arr, arr+n);
		sort(brr, brr+m);
		int nam = n-1, nu = m-1;
		while(nam >= 0 && nu >= 0){
			if(arr[nam] > brr[nu]){
				nam--; nu--; tmp++;
			}
			else
				nu--;
		}
		cout << tmp << endl;

	}
	return 0;
}
