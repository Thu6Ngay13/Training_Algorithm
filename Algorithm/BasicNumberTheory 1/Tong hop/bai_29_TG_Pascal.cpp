#include <bits/stdc++.h>
using namespace std;

void tamgiacpascal(int h)
{
	int pascal[h+1][h+1];
	
	for(int i = 1; i <= h; i++)
		for(int j = 1; j <= h; j++)
			pascal[i][j] = 0;
			
	for(int i = 1; i <= h; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			if(j == 1)
			{
				cout << 1 << " ";
				pascal[i][j] = 1;
			}
			else
			{
				cout << pascal[i-1][j-1] + pascal[i-1][j] << " ";
				pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
			}
		}
		cout << endl;
	}
}

int main()
{
	int h; cin >> h;
	tamgiacpascal(h);
	return 0;
}
