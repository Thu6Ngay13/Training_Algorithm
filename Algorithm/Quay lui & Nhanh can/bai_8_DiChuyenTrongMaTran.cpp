#include <iostream>
using namespace std;
const int Max = 105;

int dx[2] = {0, 1};
int dy[2] = {1, 0};
void Try(int m, int n, int i, int j, int &cnt)
{
	if(i == m-1 && j == n-1)
		cnt++;
	for(int k = 0; k < 2; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 < m && j1 < n)
			Try(m, n, i1, j1, cnt);
	}
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int m, n, arr[Max][Max], cnt = 0;
		cin >> m >> n;
		for(int i = 0; i < m; i++)
			for(int j = 0; j < n; j++)
				cin >> arr[i][j];
		Try(m, n, 0, 0, cnt);
		cout << cnt << endl;
	}
	return 0;
}
