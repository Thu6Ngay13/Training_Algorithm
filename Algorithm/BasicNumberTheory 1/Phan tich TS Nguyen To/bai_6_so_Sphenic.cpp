#include <bits/stdc++.h>
using namespace std;
bool so_Sphenic(int n);

int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		cout << so_Sphenic(n);
		cout << endl;
	}
	return 0;
}

bool so_Sphenic(int n)
{
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			dem++;
			n /= i;
			if(n % i == 0)
				return false;
		}	
	}
	if(n > 1)
		dem++;
	if(dem == 3)
		return true;
	else 
		return false;
}
