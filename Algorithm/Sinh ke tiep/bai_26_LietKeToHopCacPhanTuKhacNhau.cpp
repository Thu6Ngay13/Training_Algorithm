#include <bits/stdc++.h>
using namespace std;

void sinh(int n, int k, int a[], int &ok)
{
	int i = k;
	while(i >= 1 && a[i] == n - k + i)
	{
		i--;
	}
	if(i == 0)
		ok = false;
	else
	{
		a[i]++;
		for(int j = i+1; j <= k; j++)
			a[j] = a[j-1] + 1;
	}	
}

bool check(int k, int a[], int arr[])
{
	set<int> se;
	for(int i = 1; i <= k; i++)
		se.insert(arr[a[i]]);
	return se.size() == k;
}

int main()
{
	int n, k, arr[1005], a[1005], ok = true; 
	cin >> n >> k;
	set<string> ans;
	
	for(int i = 1; i <= k; i++)
		a[i] = i;
	for(int i = 1; i <= n; i++)
		cin >> arr[i];
		
	while(ok)
	{
		if(check(k, a, arr))
		{
			string tmp = "";
			for(int i = 1; i <= k; i++)
				tmp += to_string(arr[a[i]]);
			sort(tmp.begin(), tmp.end());
			ans.insert(tmp);
		}
		sinh(n, k, a, ok);
	}
	
	for(set<string>::iterator it = ans.begin(); it != ans.end(); it++)
	{
		for(int i = 0; i < (*it).size(); i++)
			cout << (*it)[i] << " ";
		cout << endl;
	}
	return 0;
}
