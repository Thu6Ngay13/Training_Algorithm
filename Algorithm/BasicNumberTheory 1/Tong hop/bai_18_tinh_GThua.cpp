#include <bits/stdc++.h>
using namespace std;
int GThua(int n);

int main()
{
	int n; cin >> n;
	cout << GThua(n);
	cout << endl;
	return 0;
}

int GThua(int n)
{
	if(n == 0 || n == 1)
		return 1;
	else
		return GThua(n-1)*n;
}
