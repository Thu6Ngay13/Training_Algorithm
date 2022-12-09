#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 100;

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
		reverse(arr+i+1, arr+n+1);
	}
}

void sinh(int n, string arr[], int &ok)
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
		reverse(arr+i+1, arr+n+1);
	}
}


int main()
{
	int t = 1;
	while(t--)
	{
		int n; cin >> n;
		string name[Max];
		
		for(int i = 1; i <= n; i++)
			cin >> name[i];
		
//		int arr[Max];
//		for(int i = 1; i <= n; i++)
//			arr[i] = i;
//		
//		int ok = true;
//		while(ok)
//		{
//			for(int i = 1; i <= n; i++)
//				cout << name[arr[i]] << " ";
//			cout << endl;
//			sinh(n, arr, ok);
//		}

		int ok = true;
		sort(name + 1, name + n + 1);
		while(ok)
		{
			for(int i = 1; i <= n; i++)
				cout << name[i] << " ";
			sinh(n, name, ok);
			cout << endl;
		}
	}
	return 0;
}
