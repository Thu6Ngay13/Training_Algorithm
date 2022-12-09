#include <bits/stdc++.h>
using namespace std;

void next(int &cnt, int arr[], int &ok)
{
	int i = cnt;
	while(i >= 1 && arr[i] == 1)
		i--;
	if(i == 0)
		ok = false;
	else
	{
		arr[i]--;
		int thieu = cnt - i + 1;
		int x = thieu/arr[i];
		int y = thieu%arr[i];
		cnt = i;
		for(int j = 1; j <= x; j++)
			arr[++cnt] = arr[i];
		if(y) 
			arr[++cnt] = y;
	}
}

int main()
{
	int n, arr[15], cnt = 1, ok = true;
	cin >> n;
	arr[1] = n;
	while(ok)
	{
		for(int i = 1; i <= cnt; i++)
			cout << arr[i] << " ";
		cout << endl;
		next(cnt, arr, ok);
	}
	
	return 0;
}
