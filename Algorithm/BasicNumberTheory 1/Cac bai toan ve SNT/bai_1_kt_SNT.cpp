#include <iostream>
using namespace std;

bool kt_SNT(int n)
{
	int dem = 0;
	if(n == 0 || n == 1 || n % 2 == 0)
		return false;
	else 
		for(int i = 2; i <= n/2; i++)
			if(n % i == 0)
				dem++;
	if(dem)
		return false;
	else 
		return true;
}


int main()
{
	int n;
	cin >> n;
	if(kt_SNT(n))
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
	return 0;
}
