#include <bits/stdc++.h>
using namespace std;

void times_uot(string s)
{
	int arr[256] = {0};
	for(int i = 0; i < s.size(); i++)
		arr[s[i]]++;
	for(int i = 0; i < s.size(); i++)
		if(arr[s[i]] > 0)
		{
			cout << s[i] << " " << arr[s[i]] << endl;
			arr[s[i]] = 0;
		}
}


int main()
{
	string s;
	getline(cin, s);
	times_uot(s);
	cout << endl;
	return 0;
}
