#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000001;

void sang(int a, int b)
{
	bool nt[MAX];
	bool nt_nt[MAX];
	for(int i = 2; i < MAX; i++)
		nt[i] = true;
	nt[0] = nt[1] = false;
	for(int i = 2;i <= sqrt(MAX); i++)
		if(nt[i])
			for(int j = i*i; j < MAX; j += i)
				nt[j] = false;
				
	int dem = 0;
	for(int i = a; i <= b; i++)	
		if(nt[i])
		{
			int tmp = i;
			bool kt;
			while(tmp)
			{
				int s1 = tmp % 10;
				tmp /= 10;
				if(nt[s1])
					kt = true;
				else 
				{
					kt = false;
					break;
				}
					
			}
			if(kt)
				dem++;
		}
	cout << dem;
}

int main()
{
	int test_case; cin >> test_case;

	while(test_case--)
	{
		int a, b; cin >> a >> b;
		while(a > b)	
			cin >> a >> b;
		sang(a, b);
	}
	return 0;
}
