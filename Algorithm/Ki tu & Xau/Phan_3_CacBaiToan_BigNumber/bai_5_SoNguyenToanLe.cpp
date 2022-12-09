#include <bits/stdc++.h>
using namespace std;

int sum(string s)
{
	set<char> se(s.begin(), s.end());
	for(auto x:se)
		if((x-'0') % 2 == 0)
			return false;
	string tmp = s;
	reverse(s.begin(), s.end());
	if(tmp == s)
		return true;
	else
		return false;
}

int main()
{
	string s;
	getline(cin, s);
	cout << sum(s) << endl;
	return 0;
}
