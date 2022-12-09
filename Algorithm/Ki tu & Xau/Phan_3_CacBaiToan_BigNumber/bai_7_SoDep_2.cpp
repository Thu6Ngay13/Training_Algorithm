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
	for(int i = 0; i < s.size(); i++)
		if(!check_SNT(s[i]-'0'))
			return false;
	string tmp = s;
	reverse(s.begin(), s.end());
	if(tmp == s)
		return true;
	return false;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin.ignore();
		getline(cin, s);
		cout << sum(s) << endl;
	}
	return 0;
}
