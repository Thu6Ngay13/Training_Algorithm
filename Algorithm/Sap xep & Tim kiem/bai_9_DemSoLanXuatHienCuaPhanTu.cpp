#include <bits/stdc++.h> 
using namespace std;
const int Max = 100;


int main(){
	int t; cin >> t;
	while(t--){
		int n, x, arr[Max], tmp = 0;
		cin >> n >> x;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		for(int i = 0; i < n; i++){
			while(arr[i++] == x)
				tmp++;
			if(tmp)
				break;
		}
		cout << tmp << endl;
	}
	return 0;
}
