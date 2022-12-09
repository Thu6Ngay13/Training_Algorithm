#include <bits/stdc++.h>
using namespace std;

void times_uot(string s)
{
	int arr[256] = {0};
	for(int i = 0; i < s.size(); i++)
		arr[s[i]]++;
	for(int i = 65; i <= 122; i++)
		if(arr[i] > 0)
			cout << (char)i << " " << arr[i] << endl;
}


int main()
{
	string s;
	getline(cin, s);
	times_uot(s);
	cout << endl;
	return 0;
}
