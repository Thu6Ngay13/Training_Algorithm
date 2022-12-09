#include <bits/stdc++.h>
using namespace std;

int digitfull(string s)
{
	if(s[0] == '0')
		return 2;
	else
		for(int i = 0; i < s.size(); i++)
			if(!isdigit(s[i]))
				return 2;
	set<char> se;
	for(int i = 0; i < s.size(); i++)
		se.insert(s[i]);
	if(se.size() == 10)
		return 1;
	return 0;
		
}

int main()
{
	string s;
	getline(cin, s);
	cout << digitfull(s) << endl;
	return 0;
}
