#include <bits/stdc++.h>
using namespace std;
bool kt_so_Smith(int n);
int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		cout << kt_so_Smith(n);
		cout << endl;
	}
	return 0;
}

bool kt_so_Smith(int n)
{
	int tmp_ = n;
	int tmp__ = n;
	int sum_ = 0;
	int sum__ = 0;
	
	for(int i = 2; i <= sqrt(tmp_); i++)
	{
		while((tmp_ % i == 0) && (i < 10))
		{
			tmp_ /= i;
			sum_ += i;
		}
		while((tmp_ % i == 0) && (i >= 10))
		{
			tmp_ /= i;
			int res = i;
			while(res)
			{
				sum_ += res % 10;
				res /= 10;
			}
		}
	}
	
	if(tmp_ > 1)
	{
		int res = tmp_;
		while(res)
		{
			sum_ += res % 10;
			res /= 10;
		}
	}
		
	while(tmp__)
	{
		sum__ += tmp__ % 10;
		tmp__ /= 10;
	}
	
	if(tmp_ != n && sum_ == sum__)
		return true;
	else 	
		return false;
}
