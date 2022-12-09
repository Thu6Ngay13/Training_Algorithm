#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll fibo_mudo[2001];
void fibo() 
{
	fibo_mudo[0] = 0;
	fibo_mudo[1] = 1;
	int mudo = 1e9+7;
	for(int i = 2; i < 2001; i++)
	{
		fibo_mudo[i] = 1ll*(fibo_mudo[i-1]%mudo + fibo_mudo[i-2]%mudo)%mudo;
	}		
}

ll fibo2(int n) 
{
	ll fn2 = 0;
	ll fn1 = 1;
	ll fn = 0;
	ll mudo = 1000000000+7;
	for(int i = 2; i <= n; i++)
	{
		fn = (fn2 + fn1)%mudo;
		fn2 = fn1%mudo;
		fn1 = fn%mudo;
	}
	return fn;
		
}

int main()
{
	int test_case;
	cin >> test_case;
	fibo();
	while(test_case--)
	{
		int n;
		cin >> n;
		cout << fibo_mudo[n] << endl;
		cout << fibo2(n) << endl;
	}
	return 0;
}
