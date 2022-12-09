#include <iostream>
#include <math.h>
using namespace std;

using ll = long long;
const ll Max = 1000001;

bool nt[Max];
void sang();
int dem(int l, int r);

int main()
{
	sang();
	int test_case; cin >> test_case;
	while(test_case--)
	{
		ll l, r;
		cin >> l >>  r;
		cout << dem(l, r) << endl;
	}
	return 0;
}

void sang()
{
	nt[0] = nt[1] = false;
	for(ll i = 2; i < Max; i++)
	{
		nt[i] = true;
	}

	for(int i = 2; i <= sqrt(Max); i++)
	{
		if(nt[i])
		{
			for(ll j = i*i; j < Max; j += i)
			{
				nt[j] = false;
			}
		}
	}

}

int dem(int l, int r)
{
	int dem = 0;	
	int a = sqrt(l);
	
	if(1ll*a*a != l)
	{
		a++;
	}
	for(int i = a; i <= sqrt(r); i++)
	{
		if(nt[i])
		{
			dem++;
		}
	}
	return dem;
}


