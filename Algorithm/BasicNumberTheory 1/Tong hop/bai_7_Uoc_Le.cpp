#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int Uoc_Le(ll n);
int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
		ll n; cin >> n;
		cout << Uoc_Le(n);
		cout << endl;
	}
	return 0;
}

int Uoc_Le(ll n)
{
	int sum = 1;
	for(int i = 2; i <= sqrt(n); i++)
	{
		int dem = 1;
		if(n % i == 0)
		{
			while(n % i == 0)
			{
				dem++;
				n /= i;
			}
			sum *= dem;
		}
	}
	if(n > 1)
		return sum*2;
	else
		return sum;
}

