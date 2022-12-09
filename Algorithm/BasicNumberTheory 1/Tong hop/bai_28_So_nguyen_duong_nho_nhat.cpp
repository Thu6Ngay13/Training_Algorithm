#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll ucln(int a, int b)
{
	if(b == 0)
		return a;
	else
		return ucln(b, a%b);
}

ll bcnn(int a, int b)
{
	return a/ ucln(a, b) * b;
}

ll sndnn(int x, int y , int z, int n)
{
	ll xyz = bcnn(x, bcnn(y, z));
	ll res = ((ll)pow(10, n-1)+xyz-1)/xyz*xyz;
	if(res <= ((ll)pow(10, n)-1))
		return res;
	else
		return -1;
}

int main()
{
	int x, y, z, n; cin >> x >> y >> z >> n;
	cout << sndnn(x, y, z, n);
	return 0;
}
