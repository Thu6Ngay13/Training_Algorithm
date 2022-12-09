#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll A468(ll n)
{
	if(n % 2 == 0)
		return n/2;
	else
		return n/2 - n;
}

int main()
{
	ll n;
	cin >> n;
	cout << A468(n);
	return 0;
}

