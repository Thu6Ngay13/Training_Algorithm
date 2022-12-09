#include <bits/stdc++.h>
using namespace std;

int Hello(string s)
{
	int tmp = 0;
	for(int i = 1; i < s.size(); i++)
		if(s[i-1] == '1' && s[i] == '0')		
			for(int j = i; j < s.size(); j++)
				if(s[j] == '1')
				{
					tmp += j-i;
					i = j + 1;
				}			
	return tmp;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		cout << Hello(s) << endl;
	}
	return 0;
}
