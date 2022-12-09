//so hoan hao
//neu p la so nguyen to: 2^p-1 cung la so nguyen to
//=> 2^(p-1)*(2^p-1) -> hh


#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool kt_SNT(int n);
void so_hh();
int dem = 0;
ll hh[30];

int main()
{
	so_hh();
	int test_case; cin >> test_case;	
	while(test_case--)
	{
		bool ok = false;
		ll n; cin >> n;
		for(int i = 0; i < dem; i++)
			if(n == hh[i])
			{
				ok = true;
				cout << "Yes" << endl;
				break;
			}
		if(ok != true)
			cout << "No" << endl;
	}
	return 0;
}

bool kt_SNT(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)	
			return false;
	return true;
}

void so_hh()
{
	for(int i = 2; i < 33; i++)
		if(kt_SNT(i))
		{
			int tmp = (int)pow(2, i) - 1;
			if(kt_SNT(tmp))
			{
				hh[dem] = 1ll*(int)pow(2,i-1)*tmp;
				dem++;
			}
		}
}












