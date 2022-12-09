#include <iostream>
#include <math.h>
using namespace std;

const int MAX = 1001;
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
	int nt_n[MAX];
	int dem = 0;
	for(int i = 2; i < MAX; i++)
		nt[i] = true;
	nt[0] = nt[1] = false;
	for(int i = 2;i <= sqrt(MAX); i++)
		if(nt[i])
		{
			dem++;
			nt_n[dem] = i;
			for(int j = i*i; j < MAX; j += i)
				nt[j] = false;
		}
	for(int i = 2; i <= n/2; i++)
			if(nt[i] == true && nt[n-i] == true)
				cout << i << " " << n-i << endl;
			
}
