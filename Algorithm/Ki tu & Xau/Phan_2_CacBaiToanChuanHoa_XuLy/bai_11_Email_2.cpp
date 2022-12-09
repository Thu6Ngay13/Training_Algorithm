#include <bits/stdc++.h>
using namespace std;

string dem(string a)
{
	for(int i = 0; i < a.size(); i++)
		a[i] = tolower(a[i]);
		
	stringstream ss(a);
	string tmp;
	string res[1000];
	string new_ = {};
	int cnt = 0;
	
	while(ss >> tmp)
		res[cnt++] = tmp;
		
	for(int i = 0; i < cnt-1; i++)
		new_ += res[i][0];
	
	return new_ + res[cnt-1] + "@gmail.com";
		
}

int main()
{
	string a;
	getline(cin, a);
	cout << dem(a) << endl;
	return 0;
}
