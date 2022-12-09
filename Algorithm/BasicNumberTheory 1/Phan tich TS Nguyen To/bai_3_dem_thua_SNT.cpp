#include <bits/stdc++.h>
using namespace std;
const int Max = 1001;
int sang_phantich(int n);

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		cout << sang_phantich(n) << endl;
	}
	return 0;
}

int sang_phantich(int n)
{
	bool nt[Max];
	for(int i = 2; i < Max; i++)
		nt[i] = true;
	nt[0] = nt[1] = false;
	for(int i = 2; i <= sqrt(Max); i++)
		if(nt[i])
			for(int j = i*i; j < Max; j += i)
				nt[j] == false;
		
	int dem = 0;
	for(int i = 2; i < Max; i++)
	{
		if((nt[i] == true) && (n % i == 0))
		{
			dem++;
			while(n % i == 0)
				n /= i;	
		}
	}
	if(n > 1)
		dem++;
	return dem;
}

