#include <bits/stdc++.h> 
using namespace std;
const int Max = 100;

vector<int> vec[Max];
void Try(int n, int arr[], int i)
{
	if(n == 0)
		return;
		
	string s = "[";
	for(int j = 1; j <= n; j++)
		s += to_string(arr[j]) + " ";
	s.pop_back();
	s += "]";
	cout << s << endl;
	
	for(int j = 1; j < n; j++)
		arr[j] += arr[j+1];
	Try(n-1, arr, i+1);
	
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, arr[Max];
		cin >> n;
		for(int i= 1; i <= n; i++)
			cin >> arr[i];
		Try(n, arr, 0);
	}
	return 0;
}
