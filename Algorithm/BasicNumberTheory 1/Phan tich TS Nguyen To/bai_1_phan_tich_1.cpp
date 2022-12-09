#include <bits/stdc++.h>
using namespace std;
const int Max = 1001;
void sang_phantich(int n);

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		sang_phantich(n);
		cout << endl;
	}
	return 0;
}

void sang_phantich(int n)
{
	bool nt[Max];
	for(int i = 2; i < Max; i++)
		nt[i] = true;
	nt[0] = nt[1] = false;
	for(int i = 2; i <= sqrt(Max); i++)
		if(nt[i])
			for(int j = i*i; j < Max; j += i)
				nt[j] == false;
		
	for(int i = 2; i < Max; i++)
	{
		if((nt[i] == true) && (n % i == 0))
		{
			cout << i;
			int dem = 0;
			while(n % i == 0)
			{
				dem++;
				n /= i;
			}	
			cout << "(" << dem << ")" << " ";
		}
	}
	if(n > 1)
		cout << n << "(1)";
}

