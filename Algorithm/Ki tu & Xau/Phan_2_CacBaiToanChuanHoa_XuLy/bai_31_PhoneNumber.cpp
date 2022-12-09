#include <bits/stdc++.h>
using namespace std;

bool PhoneNumber(int n, string s)
{
	for(int i = 0; i < n; i++)
		if(s[i] == '8')
			return n-i >= 11;
	return false;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		string s;
		cin >> n;
		cin >> s;
		if(PhoneNumber(n, s))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
