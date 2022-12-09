//11
//111
//1111 = 11*100 + 11
//11111 = 111*100 + 11
//n = a*11 + b*111 = a*11 + b*(11*10 * 1) = (a+b)*11 + b


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void eleven(int n)
{
	int tmp1 = n % 11; //b
	int tmp2 = n - tmp1*111; //a*11
	if(tmp2 >= 0 && tmp2%11 == 0) 
	{
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n; cin >> n;
		eleven(n);
	}
} 
