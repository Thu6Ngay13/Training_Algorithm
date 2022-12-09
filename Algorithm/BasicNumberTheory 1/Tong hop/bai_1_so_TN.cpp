#include <bits/stdc++.h>
using namespace std;
bool TN(int n);
int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		cout << TN(n);
		cout << endl;
	}
	return 0;
}

bool TN(int n)
{
	int tmp = 0;
	int res = n;
	while(res)
	{
		tmp = tmp*10 + res%10;
		res /= 10;
	}
	if(n == tmp)
		return true;
	else 
		return false;
}




