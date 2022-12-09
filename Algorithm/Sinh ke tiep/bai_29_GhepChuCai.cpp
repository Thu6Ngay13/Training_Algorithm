#include <bits/stdc++.h>
using namespace std;

void sinh(int n, char cc[], int &ok)
{
	int i = n-1;
	while(i >= 1 && cc[i] > cc[i+1])
		i--;
	if(i == 0)
		ok = false;
	else
	{
		int j = n;
		while(cc[i] > cc[j])
			j--;
		swap(cc[i], cc[j]);
		reverse(cc+i+1, cc+n+1);
	}
}

bool check(int n, char cc[])
{
	for(int i = 2; i <= n-1; i++)
		if(cc[i] == 'A' || cc[i] == 'E')
			return false;
	return true;
}

int main()
{
	char c, cc[100]; cin >> c;
	int n = c - 64;
	for(int i = 1; i <= n; i++)
		cc[i] = 64 + i;
	int ok = true;
	while(ok)
	{
		if(check(n, cc))
		{
			for(int i = 1; i <= n; i++)
				cout << cc[i];
			cout << endl;
		}
		sinh(n, cc, ok);
	}
	return 0;
}
