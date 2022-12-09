#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void mhh(char n[])
{
	for(int i = 0; i < strlen(n)-2; i++)
		if(n[i] == '0' && n[i+1] == '8' && n[i+2] == '4')
			n[i] = n[i+1] =  n[i+2] = 'x';
	for(int i = 0; i < strlen(n); i++)
		if(n[i] != 'x')
			cout << n[i];
	cout << endl;
}

int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
		char n[18];
		cin >> n;
		mhh(n);
	}
	return 0;
}












