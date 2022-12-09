#include <bits/stdc++.h>
using namespace std;

int XauFull(string s)
{
	int tmp = 1;
	for(int i = 1; i < s.size(); i++)
	{
		if(s[i-1] < s[i])
			tmp++;
		else if(tmp == 26 && s[i] == '.')
			tmp++;
		else
			return 27-tmp;
	}
	return 27-tmp;
}

int main()
{
	string s;
	getline(cin, s);
	cout << XauFull(s) << endl;
	return 0;
}
