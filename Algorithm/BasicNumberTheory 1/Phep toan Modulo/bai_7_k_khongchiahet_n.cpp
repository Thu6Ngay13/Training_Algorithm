//n = 3, k = 7
// 1 2 "3" 4 5 "6" 7 8 "9" 10 11
//  1       2       3        4
//tinh so cum la: 3 = k/(n-1)
//tim vi tri cua k = 7 //(3 cum + vi tri thu 1 cua cum tiep theo)
//thay cum = 3 => 6 vitri
//tim so du xem no o vi tri thu may cua cum tiep theo r(du) = k/(n-1)
//r == 0 vay no o vi tri cuoi cua cum thu 3
//r != 0 vay no vi tri thu r cua cum 3 + 1

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(int n, int k)
{
	int x = k/(n-1);
	int r = k%(n-1);
	if(r)
		return 1ll*n*x+r;
	return 1ll*n*x-1;
}

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		ll n, k; cin >> n >> k;
		cout << solve(n, k) << endl;
	}
	return 0;
}
