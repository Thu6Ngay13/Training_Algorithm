#include <bits/stdc++.h> 
using namespace std;

void sinh(char c, int k, char s[], int &ok)
{
	int i = k;
	while(i >= 1 && s[i] == c)
		i--;
	if(i == 0)
		ok = false;
	else
	{
		s[i]++;
		for(int j = i+1; j <= k; j++)
			s[j] = s[i];
	}
}

int main()
{
	char c; cin >> c;
	int k; cin >> k;
	char s[100];
	for(int i = 1; i <= k; i++)	
		s[i] = 'A';
	int ok = true;
	while(ok)
	{
		for(int i = 1; i <= k; i++)
			cout << s[i];
		cout << endl;
		sinh(c, k, s, ok);
	}
}
