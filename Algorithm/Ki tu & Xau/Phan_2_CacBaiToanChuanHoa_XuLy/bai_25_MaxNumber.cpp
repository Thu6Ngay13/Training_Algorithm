#include <bits/stdc++.h>
using namespace std;

int MaxNumber(string s)
{
	int max = 0;
	for(int i = 0; i < s.size(); i++)
		if(isdigit(s[i]))
		{
			int tmp = 0;
			for(i; isdigit(s[i]); i++)
				tmp = tmp*10 + (s[i]-'0');
			if(tmp > max)
				max = tmp;
		}
	return max;
}

int main()
{
	string s;
	getline(cin, s);
	cout << MaxNumber(s) << endl;
	return 0;
}
