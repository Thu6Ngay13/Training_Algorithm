#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//void sodep(ll n)
//{
//	ll n_fake = n;
//	ll re_n = 0;
//	int cs_cuoi = n % 10;
//	int dem = 0;
//	while(n > 10)
//	{
//		dem++;
//		re_n = re_n*10 + n%10;
//		n /= 10;
//	}
//	if((n == 2*cs_cuoi || 2*n == cs_cuoi) && (re_n%(ll)pow(10, dem-1) == (n_fake%(ll)pow(10, dem))/10))
//		cout << "YES" << endl;
//	else
//		cout << "NO" << endl;
//	
//}
//
//int main()
//{
//	int test_case; cin >> test_case;
//	while(test_case--)
//	{
//		ll n; cin >> n;
//		sodep(n);
//	}
//	return 0;
//}

int solve(char c[])
{
	int dau = c[0] - '0';
	int cuoi = c[strlen(c)-1] - '0';
	if(!(dau*2 == cuoi || dau == cuoi*2))
		return 0;
	else
		for(int i = 1; i < strlen(c)/2; i++)
			if(c[i] != c[strlen(c)-1-i])
				return 0;
	return 1;
}

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		char c[20];
		cin >> c;
		cout << solve(c) << endl;
	}
	return 0;
}








