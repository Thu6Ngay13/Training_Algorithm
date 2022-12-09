#include <bits/stdc++.h>
using namespace std;

bool pangram(string a)
{
	bool arr[26] = {false};
	for(int i = 0; i < a.size(); i++)
		arr[tolower(a[i])-'a'] = true;
	for(int i = 0; i < 26; i++)
		if(!arr[i])
			return false;
	return true;
}

int main()
{
	string a;
	getline(cin, a);
	cout << pangram(a) << endl;
	return 0;
}
