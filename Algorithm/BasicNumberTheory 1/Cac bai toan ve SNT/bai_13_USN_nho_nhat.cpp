#include <bits/stdc++.h>
using namespace std;
const int Max = 100001;

//bool nt[Max];
//void sang();
//void uoc_so_nguyen_nn(int n);
void sang(int n);

int main()
{
//	sang();
	int test_case; cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		sang(n);
	}
	return 0;
}


//void sang()
//{
//	//sang so nt
//	for(int i = 2; i < Max; i++)
//		nt[i] = true;
//	nt[0] = nt[1] = false;
//	for(int i = 2;i <= sqrt(Max); i++)
//		if(nt[i])
//			for(int j = i*i; j < Max; j += i)
//				nt[j] = false;
//}
//
//void uoc_so_nguyen_nn(int n)
//{
////	if(i == 1 || nt[i] == true)
////			cout << i << " ";
////		else if(i % 2 == 0)
////			cout << 2 << " ";
////		else
////			for(int j = 3; j <= 9; j++)
////				if(n % j == 0)
////					cout << j << " ";
//	for(int i = 1; i <= n; i++)
//	{
//		if(nt[i] || i == 1)
//			cout << i << " ";
//		else
//			for(int j = 2; j <= 9; j++)
//				if(i % j == 0)
//				{
//					cout << j << " ";
//					break;
//				}
//	}
//	cout << endl;
//}

void sang(int n)
{
	int prime[Max];
	for(int i = 1; i < Max; i++)
		prime[i] = i;
	for(int i = 2; i <= sqrt(Max); i++)
	{
		if(prime[i] == i)
		{
			for(int j = i*i; j < Max; j += i)
			{
				if(prime[j] == j)
					prime[j] = i;
			}
		}
	}
	for(int i = 1; i <= n; i++)
		cout << prime[i] << " ";
	cout << endl;
}

























