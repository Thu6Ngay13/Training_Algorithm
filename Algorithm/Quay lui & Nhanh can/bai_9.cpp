#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int n, chinh[Max], phu[Max], cot[Max];
int tmp = 0;
void Try(int i)
{
	if(i == n)
		tmp++;
	else
		for(int j = 0; j < n; j++)
		{
			if(cot[j] && chinh[n-1-j+i] && phu[i+j])
			{
				cot[j] = 0;
				chinh[n-1-j+i] = 0;
				phu[i+j] = 0;
				Try(i+1);
				
				cot[j] = 1;
				chinh[n-1-j+i] = 1;
				phu[i+j] = 1;
			}
		}	
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(chinh, 1, sizeof(chinh));
		memset(phu, 1, sizeof(phu));
		memset(cot, 1, sizeof(cot));
		tmp = 0;
		cin >> n;
		Try(0);
		cout << tmp << endl;
	}
	return 0;
}
