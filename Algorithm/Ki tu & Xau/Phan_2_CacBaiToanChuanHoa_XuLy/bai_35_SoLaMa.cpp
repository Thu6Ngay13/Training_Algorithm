#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	map<char, int> mp;
	string c = "IVXLCDM";
	int number[10] = {1, 5, 10, 50, 100, 500, 1000};
	int sum = 0;
	getline(cin, s);
	for(int i = 0; i < c.size(); i++)
		mp[c[i]] = number[i];
	
	for(int i = 0; i < s.size(); i++)
	{
		if(i != 0 && mp[s[i]] > mp[s[i-1]])
			sum += mp[s[i]] - 2*mp[s[i-1]];
		else
			sum += mp[s[i]];
	}
	cout << sum << endl;
	return 0;
}
