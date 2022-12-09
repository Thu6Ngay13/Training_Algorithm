#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void arr_(int arr[], int n)
{
	for(int i = 0; i < n; i++)
		cin >> arr[i];
}

int gcd(int a, int b)
{
	if(b == 0)	
		return a;
	else
		return gcd(b, a%b);
}

int gcd_max(int arr[], int n)
{
	int max = gcd(arr[0], arr[1]);
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(gcd(arr[i], arr[j]) > max)
				max = gcd(arr[i], arr[j]);
	return max;
}

int main()
{
	int arr[200000];
	int n; cin >> n;
	arr_(arr, n);
	cout << gcd_max(arr, n) << endl;
	return 0;
}
