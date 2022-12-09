#include <bits/stdc++.h> 
using namespace std;

int n, x, arr[30];
int sum = 0;
void Try(int i)
{
	if(sum == x);
	else
		for(int j = i; j < n; j++)
		{
			sum += arr[j];
			if(sum <= x)
				Try(i);
			cout << i << " ";
			sum -= arr[j];
			i++;
		}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> x;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		Try(0);
	}
	return 0;
}
