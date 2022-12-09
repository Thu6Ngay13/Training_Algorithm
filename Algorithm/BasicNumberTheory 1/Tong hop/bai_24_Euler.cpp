#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1000001;

//int phi[Max];
//void sang_phi()
//{
//	for(int i = 2; i < Max; i++)
//		phi[i] = i; 
//	for(int i = 2; i < )
//}

ll phi(ll n)
{
	ll res = n;
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i  == 0)
		{
			res = res - res/i;
			while(n % i == 0)
				n /= i;
		}
		
	if(n > 1)
		return res = res - res/n;
	else 	
		return res;
}

int main()
{
	ll n; cin >> n;
	cout << phi(n);
	return 0;
}
