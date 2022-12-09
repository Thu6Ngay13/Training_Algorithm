#include <bits/stdc++.h>
using namespace std;

void change_lower(string s)
{
	int dem[3] = {0};
	for(int i = 0; i < s.size(); i++)
	{
		if(isalpha(s[i]))
			dem[0]++;
		else if(isdigit(s[i]))
			dem[1]++;
		else
			dem[2]++;
	}
	for(int x:dem)
		cout << x << " ";
}


int main()
{
	string s;
	getline(cin, s);
	change_lower(s);
	cout << endl;
	return 0;
}
