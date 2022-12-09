#include <bits/stdc++.h>
using namespace std;

void sinh(int n, string &s, int &ok)
{
	int i = n-1;
	while(i >= 0 && s[i] == '1')
	{
		s[i] = '0';
		i--;
	}
	if(i == -1)
		ok = false;
	else
		s[i] = '1';
}

bool check(int n, string s)
{
	for(int i = 0; i <= n/2; i++)
		if(s[i] != s[n-1-i])
			return false;
	return true;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		string s(n, '0');
		int ok = true;
		while(ok)
		{
			if(check(n, s))
				cout << s << " ";
			sinh(n, s, ok);
		}
		cout << endl;
		
	}
	return 0;
}
