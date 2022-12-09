#include <bits/stdc++.h> 
using namespace std;
const int Max = 100000;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		ll n, arr[Max], tmp = 0; cin >> n;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr+n);
		for(int i = 1; i < n; i++){
			ll res = 1;
			while(arr[i-1] == arr[i] && i < n){
				res++;
				i++;
			}
			tmp += 1ll*res*(res-1)/2;
		}
		cout << tmp << endl;
	}
	return 0;
}
