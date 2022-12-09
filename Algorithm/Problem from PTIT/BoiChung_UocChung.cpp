#include <bits/stdc++.h> 
using namespace std;
using ll = long long;

ll gcd(int a, int b)
{
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}

ll lcm(int a, int b)
{
	return 1ll*a/gcd(a,b)*b;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int a, b; cin >> a >> b;
		cout << lcm(a, b) << " " << gcd(a, b) << endl;
	}
	return 0;
}

