#include <bits/stdc++.h>
using namespace std;

bool much(string a)
{
	bool arr[26] = {false};
	for(int i = 0; i < a.size(); i++)
		arr[a[i]-'a'] = true;
	for(int i = 0; i < 26; i++)
		if(!arr[i])
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
