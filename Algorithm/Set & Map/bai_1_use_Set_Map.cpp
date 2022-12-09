#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//int se(vector<char> c)
//{
//	set<int> se(c.begin(), c.end());
//	return se.size();		
//}
//
//int se(int n, char c[])
//{
//	set<int> se(c, c+n);
//	return se.size();
//}
//
//int se(int n, int arr[])
//{
//	set<int> se(arr, arr+n);
//	return se.size();
//}

int mpp(vector<char> c)
{
	map<int, bool> mp;
	for(vector<char>::iterator it = c.begin(); it != c.end(); it++)
		mp[*it] = true;
	return mp.size();
}

int mpp(int n, char c[])
{
	map<int, bool> mp;
	for(int i = 0; i < n; i++)
		mp[c[i]] = true;
	return mp.size();
}

int mpp(int n, int c[])
{
	map<int, bool> mp;
	for(int i = 0; i < n; i++)
		mp[c[i]] = true;
	return mp.size();
}


int main()
{
//	int n; cin >> n;
//	vector<char> c;
//	for(int i = 0; i < n; i++)
//	{
//		char tmp;
//		cin >> tmp;
//		c.push_back(tmp);
//	}

//	int n; cin >> n;
//	char c[1000];
//	for(int i = 0; i < n; i++)
//		cin >> c[i];

	int n; cin >> n;
	int arr[1000];
	for(int i = 0; i < n; i++)
		cin >> arr[i];

//	cout << se(n, arr) << endl;
	cout << mpp(n, arr) << endl;
	
	
	return 0;
}
