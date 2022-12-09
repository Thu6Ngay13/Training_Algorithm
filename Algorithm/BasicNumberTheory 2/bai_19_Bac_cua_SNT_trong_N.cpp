#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int bac_SNT_trong_N(int n, int k)
{
	int sum = 0;
	for(int i = k; i <= n; i *= k)
		sum += n/i;
	return sum;
}

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int n, k; cin >> n >> k;
		cout << bac_SNT_trong_N(n, k) << endl;
	}
	return 0;
}
