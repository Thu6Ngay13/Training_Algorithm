#include <bits/stdc++.h>
using namespace std;

void XoaTuTrongCau(string a, string b)
{
	stringstream ss(a);
	string res[1000];
	int cnt = 0;
	while(ss >> res[cnt++]);
	
	for(int i = 0; i < b.size(); i++)
		b[i] = tolower(b[i]);
		
	for(int i = 0; i < cnt; i++)
	{
		if(res[i].size() == b.size())
		{
			string tmp = res[i];
			for(int i = 0; i < b.size(); i++)
				tmp[i] = tolower(tmp[i]);
			if(tmp != b)
				cout << res[i] << " ";
		}
		else
			cout << res[i] << " ";
	}
}

int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	XoaTuTrongCau(a, b);
	return 0;
}
