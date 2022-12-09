#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int thuasonguyentothuk(int n, int k)
{
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			while(n % i == 0)
			{
				dem++;
				n /= i;
				if(dem == k)
					return i;
			}
	if(n > 1 && dem + 1 == k)
		return n;
	else 	
		return -1;
}
int main()
{
	int n, k; cin >> n >> k;
	cout << thuasonguyentothuk(n, k);
	return 0;
}
