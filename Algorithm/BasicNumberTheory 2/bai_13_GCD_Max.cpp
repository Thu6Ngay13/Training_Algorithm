#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int M = 1000001;

int main()
{
	
	int n; cin >> n;
	int cnt[100001] = {0};
	
	int Max = 0; //tim so lon nhat xong duyet tu no ve
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		Max = max(Max, x);
		for(int j = 1; j <= sqrt(x); j++)
			if(x % j == 0)
			{
				cnt[j]++;
				if(j != x/j)
					cnt[x/j]++;
			}	
	}
	
	for(int i = Max; i >= 1; i--)
		if(cnt[i] >= 2)
		{
			cout << i << endl;
			break;
		}
	return 0;
}
