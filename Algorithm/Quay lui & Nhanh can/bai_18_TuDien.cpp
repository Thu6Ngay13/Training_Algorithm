#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

bool no[Max][Max], ok = true;
set<string> dict;
set<string> tmp;
string s = "";
int k, m, n;
char arr[Max][Max];

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void Try(int i, int j)
{
	s += arr[i][j];
	if(dict.count(s))
	{
		tmp.insert(s);
		ok = false;
	}
	for(int k = 0; k < 8; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 > 0 && j1 > 0 && i1 <= m && j1 <= n && no[i1][j1])
		{
			no[i1][j1] = 0;
			Try(i1, j1);
			no[i1][j1] = 1;
		}
	}
	s.pop_back();
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(no, 1, sizeof(no));
		cin >> k >> m >> n;
		for(int i = 0; i < k; i++)
		{
			string tmp; cin >> tmp;
			dict.insert(tmp);
		}
		for(int i = 1; i <= m; i++)
			for(int j = 1; j <= n; j++)
				cin >> arr[i][j];
		for(int i = 1; i <= m; i++)
			for(int j = 1; j <= n; j++)
			{
				Try(i, j);
				s = "";
			}
		bool c = true;
		if(ok)
			cout << "-1";
		else
			for(auto x:tmp)
			{
				if(c)
				{
					cout << x;
					c = false;
				}
				else
					cout << " " << x;
			}
		dict.clear();
		tmp.clear();
		ok = true;
	}
	return 0;
}
