#include <bits/stdc++.h>
using namespace std;
const int Max = 100;
int arr[Max][Max];
int d1[Max], d2[Max], col[Max];
int sum = 0;
int res = 0;

//1
//1 2 3 4 5 6 7 8
//9 10 11 12 13 14 15 16
//17 18 19 20 21 22 23 24
//25 26 27 28 29 30 31 32
//33 34 35 36 37 38 39 40
//41 42 43 44 45 46 47 48
//48 50 51 52 53 54 55 56
//57 58 59 60 61 62 63 64

void Try(int i)
{
	if(i == 9)
		res = max(sum, res);
	else
		for(int j = 1; j <= 8; j++)	
		{
			if(d1[8-j+i] && d2[i+j-1] && col[j])
			{
				d1[8-j+i] = 0;
				d2[i+j-1] = 0;
				col[j] = 0;
				sum += arr[i][j];
				Try(i+1);
				
				d1[8-j+i] = 1;
				d2[i+j-1] = 1;
				col[j] = 1;
				sum -= arr[i][j];
			}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(d1, 1, sizeof(d1));
		memset(d2, 1, sizeof(d2));
		memset(col, 1, sizeof(col));
		sum = 0;
		res = 0;
		for(int i = 1; i <= 8; i++)
			for(int j = 1; j <= 8; j++)
				cin >> arr[i][j];
		Try(1);
		cout << res << endl;
	}
	return 0;
}
