#include <bits/stdc++.h>
using namespace std;
const int Max = 3700000;

string s;
char arr[Max];
bool no[Max];
set<string> se;

void Try(int i)
{
	for(int j = 0; j < s.size(); j++)
	{
		if(no[j])
		{
			arr[i] = s[j];
			no[j] = 0;
			if(i == s.size())
			{
				string tmp = "";
				for(int k = 1; k <= s.size(); k++)
					tmp += arr[k];
				se.insert(tmp);
			}
			else
				Try(i+1);
			no[j] = 1;
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> s;
		memset(no, 1, sizeof(no));
		Try(1);
		int ok = true;
		for(auto x:se)
		{
			if(ok)
			{
				cout << x;
				ok = false;
			}
			else
				cout << " " << x;
		}
		cout << endl;
		se.clear();
		s.clear();
	}
	return 0;
}
