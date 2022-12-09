#include <bits/stdc++.h>
using namespace std;

int XauConChan(int n, string s)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
		if((s[i]-'0') % 2 == 0)
			sum += 1 + i;
	return sum;
}

int main()
{
	int n; cin >> n;
	string s;
	cin >> s;
	cout << XauConChan(n, s) << endl;
	return 0;
}
