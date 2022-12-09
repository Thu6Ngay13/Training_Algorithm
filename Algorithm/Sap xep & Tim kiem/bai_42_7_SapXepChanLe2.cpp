#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(int a, int b){
	return a%2;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		if(n%2){
			int j = n/2+1;
			for(int i = 0; i <= n/2; i++)
				if(i != n/2)
					cout << a[i] << " " << a[j++] << " ";
				else
					cout << a[i];
		}
		else{
			int j = n/2;
			for(int i = 0; i < n/2; i++)
				cout << a[i] << " " << a[j++] << " ";
		}
		cout << endl;
	}
	return 0;
}
	
