#include <bits/stdc++.h>
using namespace std;

void output_tu(string a)
{
	stringstream ss(a);
	string tmp;
	while(ss >> tmp)
		cout << tmp << endl;
	
}

int main()
{
	string a;
	getline(cin, a);
	output_tu(a);
	cout << endl;
	return 0;
}
