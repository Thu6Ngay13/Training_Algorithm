#include <bits/stdc++.h> 
using namespace std;

void mpp(int n, int arr[])
{
	map<int, int> mp;
	for(int i = 0; i < n; i++)
		mp[arr[i]]++;
	int max = mp.begin()->second;
	int number = mp.begin()->first;
	for(map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
		if((*it).second >= max)
		{
			max = (*it).second;
			number = (*it).first;
		}
	cout << number << " " << max;
}

int main()
{
	int n;
	cin >> n;
	int arr[100000];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	mpp(n, arr);
	return 0;
}
