#include <bits/stdc++.h>
using namespace std;

bool much(string a)
{
	int cnt = 0;
	int len = a.size();
	for(int i = 0; i < len/2; i++)
		if(a[i] != a[len-1-i])
			cnt++;
	if(cnt != 1 && a.size() % 2 == 0)
		return false;
	else if(cnt == 0 && a.size() % 2 != 0)
		return true;
	return true;
}

int main()
{
	string a;
	getline(cin, a);
	cout << much(a) << endl;
	return 0;
}
