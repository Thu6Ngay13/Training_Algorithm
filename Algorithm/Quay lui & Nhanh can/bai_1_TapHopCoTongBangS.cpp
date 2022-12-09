#include <bits/stdc++.h> 
using namespace std;
const int Max = 100;

void Try(int n, int k, int arr[Max], int s, int tmp, int &cnt, int i)
{
	for(int j = arr[i-1] + 1; j <= n; j++)
	{
		arr[i] = j;
		tmp += arr[i];
		if(i == k && tmp == s)
			cnt++;
		else
			Try(n, k, arr, s, tmp, cnt, i+1);
		tmp -= arr[i];
	}
}

int main()
{
	while(true)
	{
		int n, k, arr[Max], s, tmp = 0, cnt = 0;
		memset(arr, 0, sizeof(arr));
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0)
			break;
		Try(n, k, arr, s, tmp, cnt, 1);
		cout << cnt << endl;
	}
	return 0;
}
