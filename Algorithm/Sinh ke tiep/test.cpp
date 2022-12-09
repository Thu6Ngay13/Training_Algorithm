#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 100;

void sinh(string &s, int &ok)
{
	int i = s.size()-1;
	while(i >= 0 && s[i] == '1')
	{
		s[i] = '0';
		i--;
	}
	if(i == -1)
		ok = false;
	else
		s[i] = '1';
}

int main()
{
	int n; 
	cin >> n;
	int ok = true;
	
	string s(n, '0');
	while(ok)
	{
		string tmp = "";
		cout << s;
		reverse(s.begin(), s.end());
		cout << s << " ";
		
		cout << tmp <<  " ";
		sinh(s, ok);
	}
	return 0;
}
