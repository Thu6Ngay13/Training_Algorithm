#include <bits/stdc++.h>
using namespace std;
int mi;

void Try(int i, int tmp){
	if(i == 1)
		mi = min(tmp, mi);
	else{
		if(i%3 == 0)
			Try(i/3, tmp+1);  
		if(i%2 == 0)
			Try(i/2, tmp+1);
		Try(i-1, tmp+1);
	}
}

int main(){
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n; mi = n;
		Try(n, 0);
		cout << mi << endl;
	}
	return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//using ll = long long;
//
//int dem(int n){
//	if(n == 1)
//		return 0;
//	int x = 1e9, y = 1e9, z = 1e9;
//	if(n%2 == 0)
//		x = 1 + dem(n/2);
//	if(n%3 == 0)
//		y = 1 + dem(n/3);
//	if(n>1)
//		z = 1 + dem(n-1);
//	return min({x, y, z});
//}
//
//int main(){
//	int t; cin >> t;
//	while(t--){
//		int n; cin >> n;
//		cout << dem(n) << endl;
//	}
//	return 0;
//}
