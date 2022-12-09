#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt(int n)
{
	int sum = 1;
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
		{
			int dem = 0;
			while(n % i == 0)
			{
				n /= i;
				dem++;
			}
			sum = sum*(dem+1);
		}
	if(n > 1)
		return sum*2;
	return sum;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << cnt(n) << endl;
	}
	return 0;
}
