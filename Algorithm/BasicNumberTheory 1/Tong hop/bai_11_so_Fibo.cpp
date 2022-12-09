#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void Fibo(int n)
{
	cout << 0 << " " << 1 << " ";
	ll fn1 = 1, fn2 = 0;m
	for(int i = 3; i <= n; i++)
	{
		ll fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;
		cout << fn << " ";
	}
}

int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
		int dem = 0;
		int n; cin >> n;
		Fibo(n);
	}
	return 0;
}


