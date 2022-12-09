#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x; cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a+n);
	int i = 0, j = upper_bound(a, a+n, x)-a, tmp = 0;
	while(a[j] > x || j == n) j--;
	while(i <= j){
		if(a[i] + a[j] <= x){
			i++; j--;
		}
		else
			j--;
		tmp++;
	}
	cout << tmp << endl;
	return 0;
}
