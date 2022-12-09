#include <bits/stdc++.h> 
using namespace std;

void sinh(int n, int arr[], int &ok)
{
	int i = n;
	while(i >= 1 && arr[i] == n)
		i--;
	if(i == 0)
	{
		ok = false;
		for(int i = 1; i <= n; i++)
			arr[i] = i;
	}
	else
	{
		arr[i]++;
		for(int j = i + 1; j <= n; j++)
			arr[j] = 1;
	}
}

void sinh(int n, char c[], int &ok)
{
	int i = n-1;
	while(i >= 1 && c[i] > c[i+1])
		i--;
	if(i == 0)
		ok = false;
	else
	{
		int j = n;
		while(c[i] > c[j])
			j--;
		swap(c[i], c[j]);
		reverse(c+i+1, c+n+1);
	}
}
int main()
{
	int n, arr[100];
	char c[100];
	
	cin >> n; 
	for(int i = 1; i <= n; i++)
		arr[i] = 1;
	for(int i = 1; i <= n; i++)
		c[i] = 64 + i;
		
	int ok2 = true;
	while(ok2)
	{
		int ok1 = true;
		while(ok1)
		{
			for(int i = 1; i <= n; i++)
				cout << c[i];
			for(int i = 1; i <= n; i++)
				cout << arr[i];
			cout << endl;
			sinh(n, arr, ok1);
		}
		sinh(n, c, ok2);
	}
	return 0;
}
