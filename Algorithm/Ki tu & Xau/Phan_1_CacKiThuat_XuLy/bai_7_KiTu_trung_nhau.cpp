#include <bits/stdc++.h>
using namespace std;

string much(string a, string b)
{
	string kq = {};
	bool kitu[257] = {false};
	for(int i = 0; i < a.size(); i++)
		kitu[a[i]] = true;
	for(int i = 0; i < b.size(); i++)
		if(kitu[b[i]])
		{
			kq += b[i];
			kitu[b[i]] = false;
		}
	return kq;
}


int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	cout << much(a, b);
	return 0;
}
