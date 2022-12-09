#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int main(){
	int n, arr[Max], count = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	for(int i = 1; i < n; i++){
		int tmp = arr[i];
		int pos = i-1;
		while(arr[pos] > tmp && pos >= 0){
			arr[pos+1] = arr[pos];
			pos--;
		}
		arr[pos+1] = tmp;
		cout << tmp << " " << pos + 1 << endl;  
	}
	return 0;
}

   