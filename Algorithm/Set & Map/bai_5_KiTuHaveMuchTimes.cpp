#include <bits/stdc++.h> 
using namespace std;

char mpp(string s)
{
	map<char, int> mp;
	for(int i = 0; i < s.size(); i++)
		mp[s[i]]++;
	
	char kitu = mp.begin()->first;
	int times = mp.begin()->second;
	for(auto x:mp)
		if(x.second > times)
		{
			kitu = x.first;
			times = x.second;
		}
	return kitu;
}

int main()
{
	string s;
	getline(cin, s);
	cout << mpp(s);
	return 0;
}
