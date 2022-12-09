#include <bits/stdc++.h>
using namespace std;

void next(int n, string &s, int &ok)
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

int main()
{
	while(true){
		string s; cin >> s;
		int n = s.size();
		int ok = true;
		while(ok)
		{
			cout << s[0];
			for(int i = 1; i < n; i++)
			{
				if(s[i] == s[i-1])
					cout << '0';
				else
					cout << '1';
			}
			cout << endl;
			next(n, s, ok);
		}
	}
	
	return 0;
}
