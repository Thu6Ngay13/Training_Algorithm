#include <bits/stdc++.h>
using namespace std;

bool nt(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}

bool tang(int n)
{
	while(n)
	{
		int tmp = n % 10;
		n /= 10;
		if(tmp <= (n%10)) 
			return false;
	}
	return true;
}

bool giam(int n)
{
	while(n > 9)
	{
		int tmp = n % 10;
		n /= 10;
		if(tmp >= (n%10))
			return false;
	}
	return true;
}

int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
		int dem = 0;
		int n; cin >> n;
		for(int i = pow(10, n-1); i < pow(10, n); i++)
			if(nt(i) && (tang(i) || giam(i)))
				dem++;
		cout << dem << endl;
	}
	return 0;
}
