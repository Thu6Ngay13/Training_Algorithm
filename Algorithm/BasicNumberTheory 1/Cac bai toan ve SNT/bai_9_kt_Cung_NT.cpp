#include <bits/stdc++.h>
using namespace std;
const int Max = 10001;

bool kt_UCLN_1(int a, int b);
void lk_cap_SNT(int a, int b);

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int a, b; cin >> a >> b;
		while(a > b)
			cin >> a >> b;
		lk_cap_SNT(a, b);
	}
	return 0;
}


bool kt_UCLN_1(int a, int b)
{
	while(a != b)
	{
		if(a > b)
			a = a-b;
		else 
			b = b-a;
	}
	if(a = 1)
		return true;
	else 
		return false;
}


void lk_cap_SNT(int a, int b)
{
	for(int i = a; i <= b; i++)
		for(int j = a; j <= b; j++)
			if((j > i) && (kt_UCLN_1(i, j) == true))
				cout << "(" << i << "," << j << ")" << endl;
}
