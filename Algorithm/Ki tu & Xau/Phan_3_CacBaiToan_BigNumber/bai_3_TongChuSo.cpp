#include <bits/stdc++.h>
using namespace std;

int sum(string s)
{
	int kq = 0;
	for(char x:s)
		kq += (x-'0');
	return kq;
}

int main()
{
	string s;
	getline(cin, s);
	cout << sum(s) << endl;
	return 0;
}
