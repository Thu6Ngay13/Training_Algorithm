#include <bits/stdc++.h>
using namespace std;

int UCLN(int a, int b)
{
	while(a != b)
	{
		if(a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}


int main()
{
	int a, b; cin >> a >> b;
	if(UCLN(a, b) == 1)
		cout << "YES" << endl;
	else 	
		cout << "NO" << endl;
	return 0;
}
