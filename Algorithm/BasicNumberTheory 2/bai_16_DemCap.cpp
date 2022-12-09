#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int n, k; cin >> n >> k;
	
	map<int, int> mp;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		mp[x]++;
	}
	
	int sum = 0;
	for(int i = 1; i < k/2; i++)
		if(mp.count(i) != 0 && mp.count(k-i) != 0)
			sum += mp[i]*mp[k-i];
	if(k % 2 == 0 && mp.count(k/2) != 0)
		sum += mp[k/2]*(mp[k/2]-1)/2;
	cout << sum << endl;
	return 0;
}
