#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int n, money, x[Max], arr[Max], k;
bool ok = false;

void Try(int i)
{
	for(int j = x[i-1]+1; j <= n-k+i; j++)
	{
		x[i] = j;
		if(i == k)
		{
			int sum = 0;
			for(int h = 1; h <= k; h++)
				sum += arr[x[h]];
			if(sum == money)
			{
				ok = true;
				return;
			}
		}
		else
			Try(i+1);
	}
}

int main()
{  
	int t; cin >> t;
	while(t--)
	{
		ok = false;
		cin >> n >> money;
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
		sort(arr+1, arr+n+1, greater<int>());
		for(int i = 1; i <= n; i++)
		{
			k = i; 
			Try(1);
			if(ok)
			{
				cout << k << endl;
				break;
			}
		}
		if(!ok)
			cout << "-1" << endl;
	}
	return 0;
}
