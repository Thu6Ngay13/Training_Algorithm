#include <bits/stdc++.h>
using namespace std;
bool Thuan_Nghich(int n);
bool kt_2(int n);
int main()
{
	int l, r; cin >> l >> r;
	for(int i = l; i <= r; i++ )
	{
		if(Thuan_Nghich(i) && kt_2(i))
			cout << i << " ";
	}
	cout << endl;
	return 0;
}

bool Thuan_Nghich(int n)
{
	int tmp = n;
	int res = 0;
	while(tmp)
	{
		res = res*10 + tmp%10;
		tmp /= 10;
	}
	if(res == n)
		return true;
	else
		return false;
}

bool kt_2(int n)
{
	bool kt_6 = false;
	int sum_8 = 0;
	while(n)
	{
		if((n % 10) == 6)
			kt_6 = true;
		sum_8 += n % 10;
		n /= 10;
	}
	if(sum_8 == 8 && kt_6)
		return true;
	else
		return false;
}
