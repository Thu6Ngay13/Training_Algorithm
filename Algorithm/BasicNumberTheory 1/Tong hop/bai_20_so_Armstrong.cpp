#include <bits/stdc++.h>
using namespace std;
bool so_Armstrong(int n);

int main()
{
	int n; cin >> n;
	cout << so_Armstrong(n);
	cout << endl;
	return 0;
}

bool so_Armstrong(int n)
{
	int mu = log(n)/log(10) + 1;
	int tmp = n;
	int sum = 0;
	
	while(tmp)
	{
		sum += pow(tmp%10, mu);
		tmp /= 10;
	}
	
	if(sum == n)
		return true;
	else 	
		return false;
}
