#include <bits/stdc++.h>
using namespace std;

bool so_TN_khong_9(int n)
{
	int tmp = n;
	int res = 0;
	while(tmp)
	{
		if(tmp%10 == 9)
			return false;
		res = res*10 + tmp%10;
		tmp /= 10;
	}
	if(res == n)
		return true;
	else 
		return false;
}


int main()
{
	int n; cin >> n;
	for(int i = 1; i <= n; i++)
		if(so_TN_khong_9(i))
			cout << i << " ";
	cout << endl;
	return 0;
}
