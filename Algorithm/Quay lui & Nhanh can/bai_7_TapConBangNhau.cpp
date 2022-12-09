#include <bits/stdc++.h>
using namespace std;
const int Max = 105;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int sum = 0;
		int n, arr[Max];
		cin >> n;
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		if(sum%2)
			cout << "NO" << endl; 
		else
			cout << "YES" << endl;
	}
	
}

