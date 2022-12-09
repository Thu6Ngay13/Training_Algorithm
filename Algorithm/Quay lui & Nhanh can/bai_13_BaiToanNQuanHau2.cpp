#include <bits/stdc++.h>
using namespace std;

int n = 8, arr[10][10], col[100], c[100], p[100], res, sum;
void Try(int i)
{
	if(i == n+1)
		res = max(res, sum);
	else
		for(int j = 1; j <= n; j++)
			if(col[j] && c[n-j+i] && p[i+j-1])
			{
				sum += arr[i][j];
				col[j] = 0;
				c[n-j+i] = 0;
				p[i+j-1] = 0;
				Try(i+1);
				col[j] = 1;
				c[n-j+i] = 1;
				p[i+j-1] = 1;
				sum -= arr[i][j];
			}
}


int main()
{
	int t; cin >> t;
	while(t--)
	{
		res = 0;
		int sum = 0;
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				cin >> arr[i][j];
		memset(col, 1, sizeof(col));
		memset(c, 1, sizeof(c));
		memset(p, 1, sizeof(p));
		Try(1);
		cout << res << endl;
	}
	return 0;
}
