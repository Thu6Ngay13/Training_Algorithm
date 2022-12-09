#include <bits/stdc++.h>
using namespace std;

void sinh(int n, int k, int arr[], int &ok)
{
	int i = n; 
	while(i >= 1 && arr[i] == 1)
	{
		arr[i] = 0;
		i--;
	}
	if(i == 0)
		ok = false;
	else
		arr[i] = 1;
}


int main()
{
	int t; cin >> t;
	while(t--)
	{
		
		int n, k, ok; 
		cin >> n >> k;
		int arr[1005];
		for(int i = 1; i <= n; i++)
			arr[i] = 0;
		ok = true;
		while(ok)
		{
			int cnt = 0;
			for(int i = 1; i <= n; i++)
				if(arr[i] == 1)
					cnt++;
			if(cnt == 2)	
			{
				for(int i = 1; i <= n; i++)
					cout << arr[i];
				cout << endl;
			}
			sinh(n, k, arr, ok);
		}
	}
	return 0;
}
