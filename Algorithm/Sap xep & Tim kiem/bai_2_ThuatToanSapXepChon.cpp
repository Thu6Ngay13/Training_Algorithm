#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int main(){
	
	int n, arr[Max], count = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	for(int i = 0; i < n-1; i++){
		int pos = i;
		for(int j = i+1; j < n; j++){
			if(arr[i] > arr[j])
				pos = j;
		}
		if(pos != i){
			swap(arr[i], arr[pos]);
			cout << "Buoc " << ++count << ": ";
			for(int k = 0; k < n; k++)
				cout << arr[k] << " ";
			cout << endl;
		}
	}
		
	return 0;
}
