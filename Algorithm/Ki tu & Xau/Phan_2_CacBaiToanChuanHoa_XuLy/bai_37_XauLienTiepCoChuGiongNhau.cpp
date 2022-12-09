#include <bits/stdc++.h>
using namespace std;

int Xau(string s)
{
	int cnt = 1;
	int max = 0;
	for(int i = 1; i < s.size(); i++)
	{
		if(s[i] == s[i-1])
			cnt++;
		else
		{
			if(cnt > max)
				max = cnt;
			cnt = 1;
		}
	}
	if(cnt > max)
			max = cnt;
	return max;
}

int main()
{
	string s;
	getline(cin, s);
	cout << Xau(s) << endl;
	return 0;
}
