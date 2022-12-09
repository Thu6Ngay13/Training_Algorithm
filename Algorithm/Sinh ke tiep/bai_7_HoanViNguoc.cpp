#include <bits/stdc++.h>
using namespace std;

int n, arr[1005], ok;
void sinh()
{
	int i = n-1;
	while(i >= 1 && arr[i] < arr[i+1])
		i--;
	if(i == 0)
		ok = false;
	else
	{
		int j = n;
		while(arr[i] < arr[j])
			j--;
		swap(arr[i], arr[j]);
		reverse(arr+i+1, arr+n+1);
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = n; i >= 1; i--)
			arr[n-i+1] = i;

		ok = true;
		while(ok)	
		{
			for(int i = 1; i <= n; i++)
				cout << arr[i];
			cout << " ";
			sinh();
		}
		cout << endl;
	}
	return 0;
}
