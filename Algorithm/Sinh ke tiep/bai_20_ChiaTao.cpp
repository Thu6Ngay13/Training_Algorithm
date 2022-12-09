#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
	int t = 1;
	while(t--)
	{
		int n, arr[21]; cin >> n;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
			
		string s(n, '0');
		int ok = true;
		int min = 1e9;
		
		while(ok)
		{
			ll sum1 = 0;
			ll sum2 = 0;
			for(int i = 0; i < n; i++)
			{
				if(s[i] == '1')
					sum1 += 1ll*arr[i];
				else
					sum2 += 1ll*arr[i];
			}
			if(abs(sum1-sum2) < min)
				min = abs(sum1 - sum2);
			sinh(n, s, ok);
		}
		cout << min << endl;
		
	}
	return 0;
}
