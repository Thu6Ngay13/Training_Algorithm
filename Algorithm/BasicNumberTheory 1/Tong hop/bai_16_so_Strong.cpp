#include <bits/stdc++.h>
using namespace std;
bool so_Strong(int n);
int GThua(int n);

int main()
{
	int l, r; cin >> l >> r;
	for(int i = l; i <= r; i++)
		if(so_Strong(i))
			cout << i << " ";
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

bool so_Strong(int n)
{
	int tmp = n;
	int sum = 0;
	while(tmp)
	{
		sum += GThua(tmp%10);
		tmp /= 10;
	}
	if(sum == n)
		return true;
	else 
		return false;
}
