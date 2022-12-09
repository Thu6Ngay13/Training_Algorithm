#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool se(char k, vector<char> c)
{
	set<char> se(c.begin(), c.end());
	return se.find(k) != se.end();		
}

bool mpp(int k, vector<char> c)
{
	map<char, bool> mp;
	for(vector<char>::iterator it = c.begin(); it != c.end(); it++)
		mp[*it] = true;
	return mp.find(k) != mp.end();
	
}


int main()
{
	int n; 
	char k;
	cin >> n;
	vector<char> c;
	for(int i = 0; i < n; i++)
	{
		char tmp;
		cin >> tmp;
		c.push_back(tmp);
	}
	
	cin >> k;
	
	cout << se(k, c) << endl;
	cout << mpp(k, c) << endl;
	
	
	return 0;
}
