#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll BinaryExponentiation(int a, int b)
{
	int modu = 1000000000 + 7;
	if(b == 0)
		return 1;
	ll x = BinaryExponentiation(a, b/2);
	if(b % 2 == 0)
		return ((x%modu)*(x%modu))%modu;
	else
		return (((a%modu)*(x%modu))%modu*(x%modu))%modu;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int a, b; cin >> a >> b;
		cout << BinaryExponentiation(a, b) << endl;
	}
	return 0;
}
