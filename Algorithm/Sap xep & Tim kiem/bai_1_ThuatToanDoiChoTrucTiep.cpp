#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int main(){
	
	int n, arr[Max];
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int count = 0;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(arr[i] > arr[j]){
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
				cout << "Buoc " << ++count << ": ";
				for(int k = 0; k < n; k++)
					cout << arr[k] << " ";
				cout << endl;
			}
		}
	}
	return 0;
}
