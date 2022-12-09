#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

void sinh(int n, int arr[], int &ok)
{
	int i = n-1; 
	while(i >= 1 && arr[i] >= arr[i+1])
		i--;
	if(i == 0)
		ok = false;
	else
	{
		int j = n;
		while(arr[i] >= arr[j])
			j--;
		swap(arr[i], arr[j]);
		reverse(arr + i + 1, arr + n + 1);
	}
}
int main()
{
	int n, k;
	cin >> n >> k;
	int arr[Max];
	int matrix[Max][Max];
	
	for(int i = 1; i <= n; i++)
		arr[i] = i;
		
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin >> matrix[i][j];
			
	vector<string> vec;
	int ok = true;
//	do
//	{
	while(ok)
	{
		int sum = 0;
		string str = "";
		for(int i = 1; i <= n; i++)
		{
			sum += matrix[i][arr[i]];
			str += to_string(arr[i]);
			str += " ";
		}
		if(sum == k)
			vec.push_back(str);
		sinh(n, arr, ok);
	}
//	}
//	while(next_permutation(arr+1, arr+n+1));
	cout << endl;
	cout << vec.size() << endl;
	for(auto x:vec)
		cout << x << endl;
	return 0;
}
