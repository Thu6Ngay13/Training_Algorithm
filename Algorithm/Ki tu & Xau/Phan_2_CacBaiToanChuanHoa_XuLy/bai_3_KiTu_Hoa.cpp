#include <bits/stdc++.h>
using namespace std;

string KiTu_Hoa(string a)
{
	string kq = {};
	stringstream ss(a);
	string tmp;
	while(ss >> tmp)
	{
		int cnt = 0;
		int s = tmp.size();
		for(int i = 0; i < s; i++)
		{
			if(!islower(tmp[i]))
				cnt++;
			else
				break;
		}
		if(cnt == s)
			kq += tmp + ' ';
	}
	return kq;
}

int main()
{
	string a;
	getline(cin, a);
	cout <<	KiTu_Hoa(a) << endl;
	return 0;
}
