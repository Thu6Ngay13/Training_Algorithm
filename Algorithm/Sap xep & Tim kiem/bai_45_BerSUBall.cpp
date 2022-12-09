#include <bits/stdc++.h>
using namespace std;


int main(){
	int n; cin >> n; int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	int m; cin >> m; int b[m];
	for(int i = 0; i < m; i++)
		cin >> b[i];
	sort(a, a+n);
	sort(b, b+m);
	int i = n-1, j = m-1, tmp = 0;
	while(i >= 0 && j >= 0){
		if(abs(a[i] - b[j]) < 2){
			tmp++; i--; j--;
		}
		else if(a[i] < b[j])
			j--;
		else
			i--;
	}
	cout << tmp << endl;
	return 0;
}
