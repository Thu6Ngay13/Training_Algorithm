#include <bits/stdc++.h> 
using namespace std;
const int Max = 100000;
using ll = long long;

int main(){
	int n, arr[Max], tmp = 0; cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr+n, greater<int>());
	for(int i = 0; i < n && arr[i]-i; i++){
		tmp += arr[i]-i;
	}
	cout << tmp << endl;
	return 0;
}
