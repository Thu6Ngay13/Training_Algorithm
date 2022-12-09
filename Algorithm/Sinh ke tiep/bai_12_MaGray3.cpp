#include <bits/stdc++.h>
using namespace std;

string next(string s)
{
	string tmp = "";
	tmp += s[0];
	for(int i = 1; i < s.size(); i++)
	{
		if(s[i] == '0')
			tmp += tmp[i-1];
		else
		{
			if(tmp[i-1] == '1') 
				tmp += '0';
			else
				tmp += '1';
		}
	}
	return tmp;
}

int main()
{
	while(true){
		string s; cin >> s;
		cout << next(s) << endl;
	
	}
	return 0;
}
