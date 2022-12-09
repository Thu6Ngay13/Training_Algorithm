#include <bits/stdc++.h>
using namespace std;
const int Max = 1001;
int luythua_giathua(int n, int k);

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int n, k; cin >> n >> k;
		cout << luythua_giathua(n, k) << endl;
	}
	return 0;
}

int luythua_giathua(int n, int k)
{
	int max = 0;
	for(int i = k; i <= n; i *= k)
		max += n/i;
	return max;
}

