#include <bits/stdc++.h> 
using namespace std;

int n, arr[100], ok;

void sinh()
{
	int i = n;
	while(i >= 1 && arr[i] == n)
		i--;
	if(i == 0)
		ok = false;
	else
	{
		arr[i]++;
		for(int j = i + 1; j <= n; j++)
			arr[j] = 1;
	}
}
int main()
{
	cin >> n; 
	for(int i = 1; i <= n; i++)
		arr[i] = 1 ;
	ok = true;
	while(ok)
	{
		for(int i = 1; i <= n; i++)
			cout << arr[i];
		cout << endl;
		sinh();
	}
	return 0;
}
