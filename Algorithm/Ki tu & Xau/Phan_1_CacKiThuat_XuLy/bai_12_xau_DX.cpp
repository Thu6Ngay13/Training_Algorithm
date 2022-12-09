//reverse(s.begin(), s.end())
//s = abcd
//t = abcd
//reverse(s.begin(), s.end())
//s = dcba

#include <bits/stdc++.h>
using namespace std;

bool much(string a)
{
	int len = a.size();
	for(int i = 0; i < len/2; i++)
		if(a[i] != a[len-1-i])
			return false;
	return true;
}

int main()
{
	string a;
	getline(cin, a);
	cout << much(a) << endl;
	return 0;
}
