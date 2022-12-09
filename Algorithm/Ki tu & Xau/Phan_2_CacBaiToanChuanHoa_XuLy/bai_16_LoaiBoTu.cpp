#include <bits/stdc++.h>
using namespace std;

void dem(string a, string b)
{
	stringstream ss(a);
	string res[1000];
	int cnt;
	while(ss >> res[cnt++]);
	
	for(int i = 0; i < cnt; i++)
		if(res[i] != b)
			cout << res[i] << " ";
		
}

int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	dem(a, b);
	return 0;
}
