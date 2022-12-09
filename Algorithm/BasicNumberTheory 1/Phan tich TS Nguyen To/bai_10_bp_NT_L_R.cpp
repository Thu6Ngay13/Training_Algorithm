#include <bits/stdc++.h>
using namespace std;
bool kt_SoDep(int n);
void xuat_SoDep(int l, int r);

int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
		int l, r; cin >> l >> r;
		xuat_SoDep(l, r);
		cout << endl;
	}
	return 0;
}

bool kt_SoDep(int n)
{
	int tmp = 0;
	for(int i = 2; i <= n; i++)
	{
		if(n % i == 0)
		{
			int dem = 0;
			while(n % (i*i) == 0)
			{
				tmp += 2;
				dem += 2;
				n /= (i*i);
			}	
			if(n % i == 0)
			{
				tmp++;
				dem++;
				n /= i;
			}
			if(dem < 2)
				return false;
		}
	}
	if(tmp >= 2)
		return true;
	else
		return false;
}

void xuat_SoDep(int l, int r)
{
	for(int i = l; i <= r; i++)
		if(kt_SoDep(i))
			cout << i << " ";
}





