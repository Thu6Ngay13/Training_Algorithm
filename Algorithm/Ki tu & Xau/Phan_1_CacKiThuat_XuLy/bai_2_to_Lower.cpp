#include <bits/stdc++.h>
using namespace std;

string change_lower(string s)
{
	for(int i = 0; i < s.size(); i++)
		if(s[i] <= 'Z' && s[i] >= 'A')
			s[i] = tolower(s[i]);
	return s;
}


int main()
{
	string s;
	getline(cin, s);
	cout << change_lower(s) << endl;
	return 0;
}
