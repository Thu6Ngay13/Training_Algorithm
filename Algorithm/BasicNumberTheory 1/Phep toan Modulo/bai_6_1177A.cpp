//a = xb + r(du) => du + y = b => y = b - r

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(int a, int b)
{
	int r = a%b;
	if(r == 0)
		return 0;
	return b-r;
}

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int a, b; cin >> a >> b;
		cout << solve(a, b) << endl;
	}
	return 0;
}
