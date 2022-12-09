//multi nomial
//can xem lai

#include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll gt[21];
int main()
{
	gt[0] = 1;
	for(int i = 1; i <= 20; i++)
		gt[i] = i*gt[i-1];
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		ll ans = 0;
		int n, r, g, b; cin >> n >> r >> g >> b;
		for(int i = r; i <= n; i++) 
			for(int j = g; j <= n-i; j++)
			{
				int k = n-i-j;
				if(k >= b)
					ans += gt[n]/(gt[i]*gt[j]*gt[k]);
			}	
		cout << ans << endl;	
	}
	return 0;
}
