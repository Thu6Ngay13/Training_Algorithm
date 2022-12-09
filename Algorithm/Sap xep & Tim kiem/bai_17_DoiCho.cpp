#include <bits/stdc++.h>
using namespace std;

void quick_sort(int a[], int l, int r){
	int pivet = a[r];
	int i = l, j = r;
	while(i <= j){
		while(a[i] < pivet) i++;
		while(a[j] > pivet) j--;
		if(i <= j){
			if(j-i)
				cout << i+1 << " " << j+1 << endl;
			swap(a[i].0., a[j]);
			i++; j--;
		}
	}
	if(i < r)
		quick_sort(a, i, r);
	if(j > l)	
		quick_sort(a, l, j);
}

int main(){
	int n; cin >> n;
	int a[n];
	for(auto &x:a) cin >> x;
	quick_sort(a, 0, n-1);
	return 0;
}
