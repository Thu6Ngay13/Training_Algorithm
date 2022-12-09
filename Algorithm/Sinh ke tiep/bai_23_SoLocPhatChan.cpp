#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 100;

void sinh(int n, string &s, int &ok)
{
	int i = n-1;
	while(i >= 0 && s[i] == '8')
	{
		s[i] = '6';
		i--;
	}
	if(i == -1)
		ok = false;
	else
		s[i] = '8';
}

int main()
{
	int t = 1;
	while(t--)
	{
		int k; cin >> k;
		int check = 0;
		for(int i = 2; i <= 14; i += 2)
		{
			string s(i/2, '6');
			int ok = true;
			
			while(ok && check < k)
			{
				string tmp = "";
				for(int j = 0; j < i/2; j++)
					tmp += s[j];
				cout << tmp;
				reverse(tmp.begin(), tmp.end());
				cout << tmp << " ";
				check++;
				sinh(i/2, s, ok);
			}
		}
	}
	return 0;
}
