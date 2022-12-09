#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1000001;
int uocmin[Max];

int find(int n)
{
	for(int i = 3; i <= sqrt(n); i += 2)
		if(n % i == 0)
			return i;
	return n;
}

ll A1350(int n, int k)
{
	if(n % 2 == 0)	
		return 1ll*k*2+n;
	else
		return 1ll*(k-1)*2 + find(n) + n;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		cout << A1350(n, k) << endl;
	}
	return 0;
}

