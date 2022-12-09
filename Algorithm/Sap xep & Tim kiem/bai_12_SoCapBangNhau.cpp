#include <bits/stdc++.h> 
using namespace std;
const int Max = 100000;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		ll n, arr[Max], tmp = 0;
		map<ll, int> mp;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			mp[arr[i]]++;
		}
		for(auto it:mp)
			tmp += it.second*(it.second-1)/2;
		cout << tmp << endl;
	}
	return 0;
}
