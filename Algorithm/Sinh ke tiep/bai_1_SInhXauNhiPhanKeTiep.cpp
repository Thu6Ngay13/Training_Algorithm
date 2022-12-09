#include <bits/stdc++.h> 
using namespace std;

int main()
{
	string n;
	cin >> n;
	int i = n.size()-1;
	while(i >= 0 && n[i] == '1')
	{
		n[i] = '0';
		i--;
	}
	if(i == -1)
		cout << n;
	else
		n[i] = '1';
	cout << n;
	return 0;
}
