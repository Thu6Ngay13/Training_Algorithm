//chua run duoc

#include <iostream>
#include <math.h>

using namespace std;
const int MAX = 1001;
bool nt[MAX];

void sang();
bool kt_n_nt(int n);
int dem(int a, int b);

int main()
{
	sang();
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int a, b; cin >> a >> b;
		while(a > b)
			cin >> a >> b;
		cout << dem(a, b) << endl;
	}
	return 0;
}

void sang()
{
	//sang so nt
	for(int i = 2; i < MAX; i++)
		nt[i] = true;
	nt[0] = nt[1] = false;
	for(int i = 2;i <= sqrt(MAX); i++)
		if(nt[i])
			for(int j = i*i; j < MAX; j += i)
				nt[j] = false;
}

bool kt_n_nt(int n)
{
	if(nt[n])
	{
		int sum = 0;
		while(n)
		{
			int tmp = n % 10;
			n /= 10;
			if(nt[tmp])
				sum += tmp;
			else
				return false;
		}
		
		if(nt[sum])
			return true;
		else 
			return false;
	}
	else 
		return false;
}

int dem(int a, int b)
{
	int dem = 0;
	for(int i = a; i <= b; i++)
		if(kt_n_nt(i))
			dem++;
	return dem;
}
