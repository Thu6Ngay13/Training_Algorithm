#include <bits/stdc++.h>
using namespace std;
const int Max = 1000001;

bool nt[Max];
void sang();
int dem_so_3_uoc(int n);


int main()
{
	sang();
	int test_case; cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		cout << dem_so_3_uoc(n) << endl;
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

int dem_so_3_uoc(int n)
{
	int dem = 0;
	for(int i = 1; i <= sqrt(n); i++)
		if(nt[i])
			dem++;
	return dem;
}
