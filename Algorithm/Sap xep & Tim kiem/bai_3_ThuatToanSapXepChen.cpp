#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int main(){
	
	int n, arr[Max], count = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	for(int i = 1; i < n; i++){
		int x = arr[i];
		int pos = i-1;
		while(pos >= 0 && x < arr[pos]){
			arr[pos+1] = arr[pos];
			pos--;
		}
		arr[pos+1] = x;
		cout << "Buoc " << ++count << ": ";
		for(int k = 0; k < i; k++)
			cout << arr[k] << " ";
		cout << endl;
	}
	cout << "Buoc " << ++count << ": ";
	for(int k = 0; k < n; k++)
		cout << arr[k] << " ";
	cout << endl;
		
	return 0;
}
