#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll demcap(int n, int m)
{
	int cnt1[5] = {0}, cnt2[5]= {0};
	int x = n/5, y = m/5;
	for(int i = 0; i < 5; i++)
		cnt1[i] = x;
	for(int i = 0; i < 5; i++)
		cnt2[i] = y;
	int r1 = n%5, r2 = m%5;
	for(int i = 1; i <= r1; i++)
		cnt1[i]++;
	for(int i = 1; i <= r2; i++)
		cnt2[i]++;
	ll ans = cnt1[0] * cnt2[0]
			+ cnt1[1] * cnt2[4]
			+ cnt1[2] * cnt2[3]
			+ cnt1[3] * cnt2[2]
			+ cnt1[4] * cnt2[1];
	return ans;
}

int main()
{
	int n, m;
	cin >> n >> m;
	cout << demcap(n, m) << endl;
	return 0;
}
