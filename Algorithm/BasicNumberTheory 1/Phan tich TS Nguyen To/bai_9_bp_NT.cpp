#include <bits/stdc++.h>
using namespace std;
bool kt_SoDep(int n);
void xuat_SoDep(int n);

int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		xuat_SoDep(n);
		cout << endl;
	}
	return 0;
}

bool kt_SoDep(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		int dem = 0;
		while(n % i == 0)
		{
			dem++;
			n /= i;
		}	
		if(dem >= 2) 	
			return true;
	}
	return false;
}

void xuat_SoDep(int n)
{
	for(int i = 4; i <= n; i++)
		if(kt_SoDep(i))
			cout << i << " ";
}





