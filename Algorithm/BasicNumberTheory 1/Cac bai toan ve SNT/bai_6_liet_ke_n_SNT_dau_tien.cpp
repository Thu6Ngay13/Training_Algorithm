#include <iostream>
#include <math.h>
using namespace std;

//Goldbach conjecture: neu N la so chan >= 4 thi duoc phan tich tu tong 2 so nguyen to
//phong doan nay chua chung minh duoc nhung la dung

const int MAX = 10001;
bool nt[MAX];
int nt_n[MAX];
void sang();

int main()
{
	sang();
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		for(int i = 1; i <= n/2; i++)
			if(nt[i] && nt[n-i])
				cout << i << " " << n-i << endl;
	}
	return 0;
}


void sang()
{
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
}
