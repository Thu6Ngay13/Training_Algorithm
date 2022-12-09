#include <bits/stdc++.h>
using namespace std;
bool so_CP(int n);
int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		cout << so_CP(n);
		cout << endl;
	}
	return 0;
}

bool so_CP(int n)
{
	for(int i = 1; i <= sqrt(n); i++)
		if(i*i == n)
			return true;
	return false;
}




