#include <bits/stdc++.h>
using namespace std;

void sinh(int n, int arr[], int &ok)
{
	int i = n-1;
	while(i >= 1 && arr[i] > arr[i+1])
		i--;
	if(i == 0)
		ok = false;
	else
	{
		int j = n;
		while(arr[i] > arr[j])
			j--;
		swap(arr[i], arr[j]);
		sort(arr+i+1, arr+n+1);
	}
}

bool check(int n, int arr[])
{
	for(int i = 2; i <= n; i++)
		if(arr[i] == arr[i-1]+1 
		|| arr[i] == arr[i-1]-1)
			return false;
	return true;
}

int main()
{
	int n, arr[1005];
	cin >> n;
	for(int i = 1; i <= n; i++)
		arr[i] = i;
	int ok = true;
	while(ok)
	{
		if(check(n, arr))
		{
			for(int i = 1; i <= n; i++)
				cout << arr[i];
			cout << endl;
		}
		sinh(n, arr, ok);
	}
	return 0;
}
