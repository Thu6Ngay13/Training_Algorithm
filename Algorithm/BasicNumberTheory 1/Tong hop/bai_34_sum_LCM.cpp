//sum = lcm(1,n) + lcm(1,n) + ... + lcm(n,n)
//sum = {tong[uoc_cua_n.phi(uoc_cua_n)]+1}*n/2

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1000001;

ll phi[Max];
ll sumlcm[Max];

void sang_euler()
{
	for(int i = 1; i < Max; i++)
		phi[i] = i;
	for(int i = 2; i < Max; i++)
		if(phi[i] == i)
		{
			phi[i] = i - 1;
			for(int j = 2*i; j < Max; j += i)
				phi[j] -= 1ll*phi[j]/i;
		}
}

void sang_lcm_sum()
{
	for(int i = 1; i < Max; i++)
		for(int j = i; j < Max; j += i)
			sumlcm[j] += 1ll*i*phi[i];
}


int main()
{
	sang_euler();
	sang_lcm_sum();
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		cout << 1ll*(sumlcm[n]+1)/2*n;
		cout << endl;
	}
	return 0;
}
