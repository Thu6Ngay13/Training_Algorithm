#include <bits/stdc++.h>
using namespace std;
void sinh(int n, int k, int arr[], int &ok)
{
	int i = k; 
	while(i >= 1 && arr[i] == n - k + i)
		i--;
		
	if(i == 0)
		ok = false;
	else
	{
		arr[i]++;
		for(int j = i + 1; i <= k; i++)
			arr[j] = arr[j-1] + 1;
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k, arr[45], ok;
		cin >> n >> k;
		set<int> se;
		for(int i = 1; i <= k; i++)
		{
			cin >> arr[i];
			se.insert(arr[i]);
		}
		ok = true;
		sinh(n, k, arr, ok);
		if(ok)
		{
			int tmp = 0;
			for(int i = 1; i <= k; i++)
				if(se.find(arr[i]) == se.end())
					tmp++;
			cout << tmp << endl;
		}
		else
			cout << k << endl;
	}
	return 0;
}
