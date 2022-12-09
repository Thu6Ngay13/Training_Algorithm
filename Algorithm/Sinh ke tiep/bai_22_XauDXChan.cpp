#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 100;

void sinh(int n, string &s, int &ok)
{
	int i = n-1;
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
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		string s(n/2, '0');
		int ok = true;
		int cnt = 0;
		while(ok)
		{
			string tmp = "";
			for(int i = 0; i < n/2; i++)
				tmp += s[i];
			cout << tmp;
			reverse(tmp.begin(), tmp.end());
			cout << tmp << " ";
			cnt++;
			sinh(n/2, s, ok);
		}
		cout << cnt << endl;
	}
	return 0;
}
