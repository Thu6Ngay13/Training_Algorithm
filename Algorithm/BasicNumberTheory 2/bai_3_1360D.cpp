//Polycap
//goi co i cai xeng thi can n/i cai tui
//vay n/i cai xeng chi can i cai tui

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int polycarp(int n, int k)
{
	int res = n;
	for(int i = 1; i <= sqrt(n); i++)
		if(i <= k && n % i == 0)
		{
			res = min(res, n/i);
			if(n/i <= k)
				res = min(res, i);
		}
	return res;
}

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int n, k; cin >> n >> k;
		cout << polycarp(n, k) << endl;
	}
	return 0;
}
