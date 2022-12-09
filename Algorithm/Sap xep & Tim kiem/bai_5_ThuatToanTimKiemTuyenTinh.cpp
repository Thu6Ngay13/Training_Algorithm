#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int main(){
	int n, x, arr[Max], ok = 0; cin >> n >> x;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	for(int i = 0; i < n; i++)
		if(arr[i] == x){
			ok = true;
			break;
		}
	cout << ok << endl;
	return 0;
}
