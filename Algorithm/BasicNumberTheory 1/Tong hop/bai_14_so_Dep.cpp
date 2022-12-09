#include <bits/stdc++.h>
using namespace std;
bool kt_So_Dep(int n);

int main()
{
	int l, r; cin >> l >> r;
	for(int i = l; i <= r; i++)
		if(kt_So_Dep(i))
			cout << i << " ";
	cout << endl;
	return 0;
}

bool kt_So_Dep(int n)
{
	int tmp_ = n;
	int res = 0;
	
	while(tmp_)
	{
		res = res*10 + tmp_ % 10;
		tmp_ /= 10;
	}
	if(res != n)
		return false;
	
	int tmp__ = n;
	int dem = 0;
	for(int i = 2; i <= sqrt(tmp__); i++)
	{
		if(tmp__ % i == 0)
		{
			dem++;
			while(tmp__ % i == 0)
				tmp__ /= i;
		}
	}
	
	if(tmp__ > 1)
		dem++;
	if((dem == 3) && (res == n))
		return true;
	else
		return false;
}
