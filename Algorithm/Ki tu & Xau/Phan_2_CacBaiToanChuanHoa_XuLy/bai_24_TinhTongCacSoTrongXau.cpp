#include <bits/stdc++.h>
using namespace std;

int KiTuKhongLap(string s)
{
	int sum = 0;
	for(int i = 0; i < s.size(); i++)
		if(isdigit(s[i]))
		{
			int tmp = 0;
			for(i; isdigit(s[i]); i++)
				tmp = tmp*10 + (s[i]-'0');
			sum += tmp;
		}
	return sum;
}

int main()
{
	string s;
	getline(cin, s);
	cout << KiTuKhongLap(s) << endl;
	return 0;
}
