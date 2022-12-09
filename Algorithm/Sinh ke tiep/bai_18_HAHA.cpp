#include <bits/stdc++.h>
using namespace std;

void sinh(string &s, int &ok)
{
	int i = s.size()-1;
	while(i >= 0 && s[i] == 'H') 
	{
		s[i] = 'A';
		i--;
	}
	if(i == -1)
		ok = false;
	else
		s[i] = 'H';
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string s(n, 'A');
		int ok = true;
		while(ok)
		{
			if(s[0] == 'H' && s[s.size()-1] == 'A')
			{
				bool check = true;
				for(int i = 0; i < s.size()-1; i++)
				{
					if(s[i] == 'H' && s[i+1] == 'H')
						check = false;
				}
				if(check)
					cout << s << endl;
			}
			sinh(s, ok);
		}
		
	}
	return 0;
}
