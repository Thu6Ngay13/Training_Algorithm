#include <bits/stdc++.h>
using namespace std;
const int Max = 1000;

//cheo chinh : n - j + i
//cheo phu : i + j - 1
//1 2 3 4 5 6 7 8
//1 2 3 4 5 6 7 8
//1 2 3 4 5 6 7 8
//1 2 3 4 5 6 7 8
//1 2 3 4 5 6 7 8
//1 2 3 4 5 6 7 8
//1 2 3 4 5 6 7 8
//1 2 3 4 5 6 7 8


int d1[100], d2[100], col[100];
int n, tmp = 0;
void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(col[j] && d1[n-j+i] && d2[i+j-1])
		{
			col[j] = 0;
			d1[n-j+i] = 0;
			d2[i+j-1] = 0;
			if(i == n)
				tmp++;
			Try(i+1);
			//back track
			col[j] = 1;
			d1[i-j+n] = 1;
			d2[i+j-1] = 1;
		}
	}
}

int main()
{
	memset(d1, 1, sizeof(d1));
	memset(d2, 1, sizeof(d2));
	memset(col, 1, sizeof(col));
	cin >> n;
	Try(1);
	cout << tmp << endl;
	return 0;
}
