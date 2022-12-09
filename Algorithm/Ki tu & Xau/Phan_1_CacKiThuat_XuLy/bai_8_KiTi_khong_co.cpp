#include <bits/stdc++.h>
using namespace std;

string much(string a, string b)
{
	string kq = {};
	bool kitu[257] = {false};
	for(int i = 0; i < b.size(); i++)
		kitu[b[i]] = true;
	for(int i = 0; i < a.size(); i++)
		if(!kitu[a[i]])
		{
			kq += a[i];
			kitu[a[i]] = true;
		}
	return kq;
}

int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	cout << much(a, b) << endl;
	return 0;
}
