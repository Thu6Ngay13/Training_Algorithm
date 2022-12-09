#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int modul_mu(int x, int i)
{
	int modu = 1e9+7;
	if(i == 0)
		return 1;
	ll k = modul_mu(x, i/2);
	if(i % 2 == 0)
		return ((k%modu)*(k%modu))%modu;
	else
		return ((x%modu)*(k%modu)*(k%modu))%modu;
}

ll solve(int n, int x, int P[])
{
	ll sum = 0;
	int modu = 1e9+7;
	srand(time(NULL));
	for(int i = 0; i < n; i++)
	{
		cin >> P[i];
//		P[i] = rand() % (1000+999)-999;
	}
	for(int i = 0; i < n; i++)
	{
		sum += ((P[i]%modu)*modul_mu(x, i)%modu);
		sum = sum%modu;
	}
	return sum;
}

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int n, x; cin >> n >> x;
		int P[1001];
		cout << solve(n, x, P) << endl;
	}
	return 0;
}
