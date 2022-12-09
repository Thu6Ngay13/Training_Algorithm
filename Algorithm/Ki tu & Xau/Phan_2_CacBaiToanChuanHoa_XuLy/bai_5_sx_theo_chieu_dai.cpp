#include <bits/stdc++.h>
using namespace std;

string sx(string a)
{
	stringstream ss(a);
	string tmp1;
	string tmp2[1000];
	string kq = {};
	int cnt = 0;
	
	while(ss >> tmp1)
	{
		tmp2[cnt] = tmp1;
		cnt++;
	}
	
	for(int i = 0; i < cnt-1; i++)
		for(int j = i + 1; j < cnt; j++)
		{
			if(tmp2[i]> tmp2[j])
			{
				string tmp3 = tmp2[i];
				tmp2[i] = tmp2[j];
				tmp2[j] = tmp3;
			}
			if(tmp2[i].size() > tmp2[j].size())
			{
				string tmp3 = tmp2[i];
				tmp2[i] = tmp2[j];
				tmp2[j] = tmp3;
			}
		}
	for(int i = 0; i < cnt; i++)
		kq += tmp2[i] + ' ';
	return kq;
}

int main()
{
	string a;
	getline(cin, a);
	cout << sx(a) << endl;
	return 0;
}
