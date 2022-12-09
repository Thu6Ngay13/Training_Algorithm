#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int n, arr[Max][Max], ok;
int dx[2] = {0, 1};
int dy[2] = {1, 0};
string road = "DR";
string res = "";

void Try(int i, int j)
{
	if(i == n-1 && j == n-1)
	{
		cout << res << " ";
		ok = 0;
	}
	for(int k = 0; k < 2; k++)
	{
		int j1 = j + dx[k];
		int i1 = i + dy[k];
		if(i1 < n && j1 < n && arr[i1][j1])
		{
			res += road[k];
			arr[i1][j1] = 0;
			Try(i1, j1);
			arr[i1][j1] = 1;
			res.pop_back();
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		res = "";
		ok = 1;
		cin >> n;
		for(int i = 0; i < n; i++)	
			for(int j = 0; j < n; j++)	
				cin >> arr[i][j];
		if(arr[0][0])
			Try(0, 0);
		if(ok) 
			cout << "-1" << endl;
		else
			cout << endl;
	}
	return 0;
}
