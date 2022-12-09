#include <bits/stdc++.h>
using namespace std;

const int Max = 1000001;
int phi[Max];

void sang()
{
	for(int i = 1; i < Max; i++)
		phi[i] = i;
	phi[0] = 0; 
	for(int i = 2; i < Max; i++)
		if(phi[i] == i) //i la so nguyen to
		{
			phi[i] -= 1;
			for(int j = 2*i ; j < Max; j += i)
				phi[j] = phi[j] - phi[j]/i;
		}
}

int main()
{
	sang();
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		for(int i = 1; i <= n; i++)
			cout << phi[i] << " ";
		cout << endl;
	}
	return 0;
}
