#include <bits/stdc++.h> 
using namespace std;
const int Max = 100000;
using ll = long long;

int main(){
	int n, arr[Max], tmp = 1e9 + 5; cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr+n);
	
	for(int i = 1; i < n && tmp; i++)
		tmp = min(tmp, arr[i]-arr[i-1]);
	cout << tmp << endl;
	
	return 0;
}
