#include <bits/stdc++.h> 
using namespace std;


int main(){
	int n; cin >> n;
	int a[n];
	for(auto &x:a) cin >> x;
	int pivot = a[n-1];
	int i = -1;
	for(int j = 0; j < n; j++){
		if(a[j] < pivot || j == n-1){
			i++;
			swap(a[i], a[j]);
		}
	} 
	for(auto x:a){
		if(x == pivot)	
			cout << "[" << x << "] ";
		else
			cout << x << " ";
	}
	cout << endl;
	return 0;
}
