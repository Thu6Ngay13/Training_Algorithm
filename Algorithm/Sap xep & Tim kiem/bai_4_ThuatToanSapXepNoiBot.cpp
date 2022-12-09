#include <bits/stdc++.h> 
using namespace std;
const int Max = 100;

int main(){
	int n, arr[Max], count = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	for(int i = n-1; i > 0; i--){
		int ok = 0;
		for(int j = 0; j < i; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				ok++;
			}
		}
		if(ok){
			cout << "Buoc " << ++count << ": ";
			for(int k = 0; k < n; k++)
				cout << arr[k] << " ";
			cout << endl;
		}
	}
	return 0;
}
