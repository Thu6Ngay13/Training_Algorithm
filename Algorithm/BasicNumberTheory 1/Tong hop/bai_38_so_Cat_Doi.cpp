#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void scd(ll n)
{
	ll rev = 0;
	int cnt = 0;
	while(n)
	{
		rev = rev*10 + n%10;
		n /= 10;
		cnt++;
	}
	
	bool check = true;
	ll output = 0;
	ll m = rev;
	while(m)
	{
		int tmp = m %10;
		m /= 10;
		if(tmp == 0 || tmp == 8 || tmp == 9)
			output = output*10;
		else if (tmp == 1)
			output = output*10 + 1;
		else
		{
			check = false;
			break;
		}
	}
	
	if(check && output != 0 && rev < pow(10, cnt-1))
		cout << output*10 << endl;
	else if(check && output != 0)		
		cout << output << endl;
	else
		cout << "INVALID" << endl; 
}

int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
		ll n; cin >> n;
		scd(n);
	}
	return 0;
}












