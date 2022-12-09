#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int n, arr[Max][Max];
int dx[4] = {0, -1, 1, 0};
int dy[4] = {1, 0, 0, -1};
string road = "DLRU";
vector<string> vec;
string res = "";

void Try(int i, int j)
{
	if(i == n-1 && j == n-1)
		vec.push_back(res);
	else
		for(int k = 0; k < 4; k++)
		{
			int i1 = i + dy[k];
			int j1 = j + dx[k];
			if(i1 >= 0 && j1 >= 0 
			&& i1 < n && j1 < n && arr[i1][j1])
			{
				arr[i1][j1] = 0;
				res += road[k];
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
		vec.clear();
		res = "";
		cin >> n;
		for(int i = 0 ; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> arr[i][j];
		arr[0][0] = 0;
		Try(0, 0);
		if(vec.size())
			for(auto it:vec)
			{
				if(it != *(vec.end()-1))
					cout << it << " ";
				else
					cout << it;
			}
		else
			cout << "-1";
		cout << endl;
	}
	return 0;
}
