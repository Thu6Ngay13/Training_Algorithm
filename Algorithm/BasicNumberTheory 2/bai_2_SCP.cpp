#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int scp(int b)
{
	int kq = 1;
	for(int i = 2; i <= sqrt(b); i++)
	{
		int dem = 0;
		if(b % i == 0)
		{
			while(b % i == 0)
			{
				dem++;
				b /= i;
			}
			if(dem % 2 != 0)
				kq *= i;
		}
	}
	if(b > 1)
		return kq*b;
	return kq;
}

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int b; cin >> b;
		cout << scp(b) << endl;
	}
	return 0;
}
