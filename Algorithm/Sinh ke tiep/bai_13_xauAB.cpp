#include <bits/stdc++.h>
using namespace std;

int n, k, x[100], ok;
void sinh()
{
	int i = n;
	while(i >= 1 && x[i] == 1)
	{
		x[i] = 0;
		i--;
	}
	if(i == 0)
		ok = false;
	else
		x[i] = 1;
}

bool check()
{
	int ans = 0;
	int dem = 0;
	for(int i = 1; i <= n; i++)
	{
		if(x[i] == 0)
			dem++;
		else
			dem = 0;
		if(dem > k)
			return false;
		if(dem == k)
			ans++;
	}
	return ans == 1;
}

int main()
{
	int t = 1;
	while(t--)
	{
		cin >> n >> k;
		for(int i = 1; i <= n; i++)
			x[i] = 0;
		ok = true;
		vector<string> vec;
		while(ok)
		{
			if(check())
			{
				string s = {};
				for(int i = 1; i <= n; i++)
				{
					if(x[i] == 0)
						s += 'A';
					else
						s += 'B';
				}
				vec.push_back(s);
			}
			sinh();
		}
		cout << vec.size() <<e endl;
		for(int i = 0; i < vec.size(); i++)
			cout << vec[i] << endl;
	}
	return 0;
}
