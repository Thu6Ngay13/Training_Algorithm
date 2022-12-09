#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int dy[2] = {1, 0};
int dx[2] = {0, 1};
int m, n, arr[Max][Max];
int tmp = 0;

void Try(int i, int j)
{
	if(i == m-1 && j == n-1)
		tmp++;
	else
		for(int k = 0; k < 2; k++)
		{
			int i1 = i + dy[k];
			int j1 = j + dx[k];
			if(i1 < m && j < n)
				Try(i1, j1);
		}
}


int main()
{
	int t; cin >> t;
	while(t--)
	{
		tmp = 0;
		cin >> m >> n;
		for(int i = 0; i < m; i++)
			for(int j = 0; j < n; j++)
				cin >> arr[i][j];
		Try(0, 0);
		cout << tmp << endl;
	}
	return 0;
}
