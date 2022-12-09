#include <iostream>
#include <math.h>
using namespace std;
const int MAX = 1000001;
//neu tu 0 toi 10^9 thi sang toi 10^7 xong check theo ham nguyen to tu 10^7 + 1 tro di


void sang(int n);

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		sang(n);
	}
	return 0;
}

void sang(int n)
{
	bool nt[MAX];
	for(int i = 2; i < MAX; i++)
		nt[i] = true;
	nt[0] = nt[1] = false;
	for(int i = 2;i <= sqrt(MAX); i++)
		if(nt[i])
			for(int j = i*i; j < MAX; j += i)
				nt[j] = false;
	if(nt[n])
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
}
