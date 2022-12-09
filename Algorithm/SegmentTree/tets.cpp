#include <bits/stdc++.h>
#include <fstream>
using namespace std;
const int N = 1e5 + 5;

int a[5] = {1,2,3,4,5};

int bs2(int x){
	int l = 0, r = 5-1;
	int pos = 0;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] <= x){
			l = m+1;
			pos = m;
		}
		else r = m-1;
		cout << l << " " << r << " " << m << endl;
	}
	return pos;
}

int main(){
	cout << bs2(0) << endl;
	return 0;
}




