#include <bits/stdc++.h>
using namespace std;
const int Max = 12345;
map<int, int> mp;
bool cmp(int a, int b){
	if(mp[a] != mp[b])
		return mp[a] > mp[b];
	return a < b;
}

int main(){
	int t; cin >> t;
	while(t--){
		mp.clear();
		int n, arr[Max];
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			mp[arr[i]]++;
		}
		sort(arr, arr+n, cmp);
		for(int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}
