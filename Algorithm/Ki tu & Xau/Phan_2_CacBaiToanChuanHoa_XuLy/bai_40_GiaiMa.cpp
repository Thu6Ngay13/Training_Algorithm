#include <bits/stdc++.h>
using namespace std;

string GiaiMa(string s)
{
	string kq = {};
	for(int i = 0; i < s.size(); i += 2)
		for(int j = 1; j <= int(s[i+1]-'0'); j++)
			kq += s[i];
	return kq;
}

int main()
{
	string s;
	getline(cin, s);
	cout << GiaiMa(s) << endl;
	return 0;
}
