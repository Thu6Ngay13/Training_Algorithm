#include <bits/stdc++.h>
using namespace std;

//ll C[1001][1001];
////C[i][j] : Luu to hop chap j cua i
////1e9 = 1 000 000 000. nhung e o day la so thuc.
//const int MOD = 1000000007;
//
//void init(){
//	for(int i = 0; i <= 1000; i++){
//		for(int j = 0; j <= i; j++){
//			if(j == 0 || j == i)
//				C[i][j] = 1;
//			else{
//				C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
//				C[i][j] %= (int)(1e9 + 7);
//			}
//		}
//	}
//}

int x, y, g;
//O(log(max(a,b))
void extended_gcd(int a, int b){
	if(b == 0){
		x = 1;
		y = 0;
		g = a;
	}
	else{
		extended_gcd(b, a % b);
	// da co x1, y1 : x, y
		int tmp = x; // x1
		x = y; // x = y1
		y = tmp - a / b * y;
	}
}

//O(log(max(a,m))
int modular_inverse(int a, int m){
	extended_gcd(a, m);
	return (x % m + m) % m;
}

//O(m)
int modular_inverse2(int a, int m){
	for(int i = 1; i < m; i++){
		if(a * i % m == 1)
			return i;
	}
}

int main()
{
//	cout << modular_inverse(15,13) << endl;
	extended_gcd(10, 6);
	cout << x << endl;
	return 0;
}
