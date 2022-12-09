#include <bits/stdc++.h>
using namespace std;

int n, arr[1005], ok;
void sinh()
{
	int i = n;
	while(i >= 1 && arr[i] == 1)
	{
		arr[i] = 0;
		i--;
	}
	if(i == 0)
		ok = false;
	else
		arr[i] = 1;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; i++)
			arr[i] = 0;
		ok = true;
		while(ok)
		{
			string s = {};
			for(int i = 1; i <= n; i++)
				if(arr[i] == 0)
					s += 'A';
				else
					s += 'B';
			cout << s << " ";
			sinh();
		}
		cout << endl;
	}
	return 0;
}
