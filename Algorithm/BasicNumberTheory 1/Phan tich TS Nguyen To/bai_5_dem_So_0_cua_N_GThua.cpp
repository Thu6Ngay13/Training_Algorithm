#include <iostream>
using namespace std;
int dem_so_0(int n);

int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		cout << dem_so_0(n);
		cout << endl;
	}
	return 0;
}

int dem_so_0(int n)
{
	int dem = 0;
	for(int i = 5; i <= n; i *= 5)
		dem += n/i;
	return dem;
}
