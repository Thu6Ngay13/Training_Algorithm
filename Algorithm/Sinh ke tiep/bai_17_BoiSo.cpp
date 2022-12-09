#include <bits/stdc++.h> 
using namespace std;
using ll = long long;

int ok;
ll res[501];
string s(13, '0');
void sinh()
{
	int i = s.size()-1;
	if(stoll(s) > 9000000999999)
		ok = false;
	while(i >= 0 && s[i] == '9')
	{
		s[i] = '0';
		i--;
	}
	if(i == -1)
		ok = false;
	else
		s[i] = '9';
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		ok = true;
		int tmp = 0;
		while(ok)
		{
			ll tmp = stoll(s);
			for(int i = 1; i < 501; i++)
				if(tmp != 0 && tmp % i == 0 && res[i] == 0)
					res[i] = tmp;
			sinh();
		}
		int n; cin >> n;
		cout << res[n] << endl;
	}
	return 0;
}
