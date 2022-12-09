//d(n) = 3 => dang (2+1) => p^2 = n, p la so nguyen to
//chi can sang den 10^3 + 1


#include <bits/stdc++.h>
using namespace std;
const int Max = 1001;

bool nt[Max];
void sang();
void lk_so_3_uoc(int n);


int main()
{
	sang();
	int test_case; cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		lk_so_3_uoc(n);
	}
	return 0;
}


void sang()
{
	//sang so nt
	for(int i = 2; i < Max; i++)
		nt[i] = true;
	nt[0] = nt[1] = false;
	for(int i = 2;i <= sqrt(Max); i++)
		if(nt[i])
			for(int j = i*i; j < Max; j += i)
				nt[j] = false;
}

void lk_so_3_uoc(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
		if(nt[i])
			cout << i*i  << " ";
}
