#include <bits/stdc++.h> 
using namespace std;

//void se(int m, int n, int arr1[], int arr2[])
//{
//	set<int> se1(arr1, arr1+m);
//	set<int> se2(arr2, arr2+n);
//	for(set<int>::iterator it = se2.begin(); it != se2.end(); it++)
//		se1.erase(*it);
//	for(set<int>::iterator it = se1.begin(); it != se1.end(); it++)
//		cout << *it << " ";
//	
//}

void mpp(int m, int n, int arr1[], int arr2[])
{
	map<int, bool> mp2;
	for(int i = 0; i < n; i++)
		mp2[arr2[i]] = true;
	for(int i = 0; i < m; i++)
		if(mp2.find(arr1[i]) == mp2.end())
			cout << arr1[i] << " ";
}

int main()
{
	int m, n;
	cin >> m >> n;
	int arr1[1000], arr2[1000];
	for(int i = 0; i < m; i++)
		cin >> arr1[i];
	for(int i = 0; i < n; i++)
		cin >> arr2[i];
//	se(m, n, arr1, arr2);
	mpp(m, n, arr1, arr2);
	return 0;
}
