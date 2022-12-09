#include <bits/stdc++.h>
using namespace std;

bool XauDX(string s)
{
	int arr[257] = {0};
	for(int i = 0; i < s.size(); i++)
		arr[s[i]]++;
	int tmp = 0;
	for(int i = 1; i < 257; i++)
		if(arr[i] % 2 != 0)
			tmp++;
	if(tmp > 1)
		return false;
	return true;
}

int main()
{
	string s;
	getline(cin, s);
	cout << XauDX(s) << endl;
	return 0;
}
