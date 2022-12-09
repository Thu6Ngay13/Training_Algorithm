#include <bits/stdc++.h>
using namespace std;
const int Max = 354321;
int x;
bool cmp(int a, int b){
	return abs(a-x) < abs(b-x);
}

int main(){
	int t; cin >> t;
	while(t--){
		int n, arr[Max];
		cin >> n >> x;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr+n, cmp);
		for(int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}
