#include <bits/stdc++.h>
using namespace std;

char much(string s)
{
	int mang[257] = {0};
	for(int i = 0; i < s.size(); i++)
		mang[s[i]]++;
		
	int max = mang[0];
	char kitu;
	for(int i = 0; i <= 256; i++)
		if(mang[i] >= max)
		{
			max = mang[i];
			kitu = (char)(i);
		}
	return kitu;
}


int main()
{
	string s;
	getline(cin, s);
	cout << much(s);
	return 0;
}
