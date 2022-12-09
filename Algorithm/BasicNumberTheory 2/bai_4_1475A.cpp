#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool kt_uocle(ll n)
{
	if(n % 2 != 0)
		return true;
		
	while(n % 2 == 0)
		n /= 2;
	return n > 1;
}

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		ll n; cin >> n;
		if(kt_uocle(n))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
