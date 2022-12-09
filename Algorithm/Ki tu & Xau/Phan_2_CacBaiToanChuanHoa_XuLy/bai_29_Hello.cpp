#include <bits/stdc++.h>
using namespace std;

bool Hello(string s)
{
	char h[5] = {'h', 'e', 'l', 'l', 'o'};
	int cnt = 0;
	for(int i = 0; i < s.size(); i++)
		if(s[i] == h[cnt])
			cnt++;
			
	return cnt == 5;
}

int main()
{
	string s;
	getline(cin, s);
	cout << Hello(s) << endl;
	return 0;
}
