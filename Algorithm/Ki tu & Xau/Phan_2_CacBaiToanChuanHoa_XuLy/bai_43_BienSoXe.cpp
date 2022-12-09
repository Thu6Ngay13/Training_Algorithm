#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
	stringstream ss1(s);
	string tmp1;
	while(getline(ss1, tmp1, '-'));
	
	stringstream ss2(tmp1);
	string tmp2;
	string tmp = {};
	while(getline(ss2, tmp2, '.'))
		tmp  += tmp2;
	
	set<char> se(tmp.begin(), tmp.end());
	if(se.size() == 1)
		return 1;
	else if(se.size() == 2)
	{
		if(se.find('8') != se.end() && se.find('6') != se.end())
			return true;
	
		multiset<char> ms(tmp.begin(), tmp.end());
		ms.erase(tmp[0]);
		if(ms.size() == 2)
			return true;
		else
			return false;
	}
	else if(se.size() == 5)
		for(int i = 1; i < 5; i++)
		{
			if(tmp[i] <= tmp[i-1])
				return false;
			else if(tmp[i])
				return true;
		}
	else
		return false;
}

int main()
{
	int n;
	string s;
	
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++)
	{
		getline(cin, s);
		cout << check(s) << endl;
	}
	return 0;
}
