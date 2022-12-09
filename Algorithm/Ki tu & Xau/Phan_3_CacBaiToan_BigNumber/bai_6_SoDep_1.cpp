#include <bits/stdc++.h>
using namespace std;

bool check_SNT(int x)
{
	if(x == 2 || x == 3 || x == 5 || x == 7 )
		return true;
	else
		return false;
}

bool sum(string s)
{
	int tmp = 0;
	for(int i = 0; i < s.size(); i++)
	{
		tmp += (s[i]-'0');
		if(!check_SNT(s[i]-'0'))
			return false;
	}
	if(tmp % 10 == 0)
		return true;
	return false;
}

int main()
{
	string s;
	getline(cin, s);
	cout << sum(s) << endl;
	return 0;
}
