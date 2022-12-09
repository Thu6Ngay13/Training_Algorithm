#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int bac_SNT_trong_N(int n, int k)
{
	int min = 1000000000;
	int res = k;
	for(int i = 2; i <= sqrt(k); i++)				
		if(k % i == 0)
		{
			int dem = 0;
			while(k % i == 0)
			{
				dem++;
				k /= i;
			}
			if(dem < min)
			{
				min = dem;
				res = i;
			}
		}
	if(k > 1 && min > 1)
	{
		res = k; 
		min = 1;
	}
	
	int ans = 0;
	for(int i = k; i <= n; i *= k)
		ans += n/i;
	return ans/min;
}

int main()
{
	int n, k; cin >> n >> k;
	cout << bac_SNT_trong_N(n, k) << endl;
	return 0;
}
