#include <iostream>
using namespace std;
int max_Uoc(int n);

int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		cout << max_Uoc(n);
		cout << endl;
	}
	return 0;
}

int max_Uoc(int n)
{
	int max = 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		while(n % i == 0)
		{
			max = i;
			n /= i;
		}
	}
	
	if(n > 1)
		return n;
	else
		return max;
}
