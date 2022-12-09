#include <bits/stdc++.h> 
using namespace std;

bool mpp(string s)
{
	for(int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
	set<char> se;
	for(int i = 0; i < s.size(); i++)
		se.insert(s[i]);
	return se.size() == 26;
}

int main()
{
	string s;
	getline(cin, s);
	cout << mpp(s);
	return 0;
}
