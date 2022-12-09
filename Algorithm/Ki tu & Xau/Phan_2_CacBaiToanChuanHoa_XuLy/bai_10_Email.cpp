#include <bits/stdc++.h>
using namespace std;

string sx(string a)
{
	for(int i = 0; i < a.size(); i++)
		a[i] = tolower(a[i]);
		
	stringstream ss(a);
	string res[100];
	string new_ = {};
	string tmp;
	int cnt = 0;
	
	while(ss >> tmp)
		res[cnt++] = tmp;
	new_ += res[cnt-1];
	
	for(int i = 0; i < cnt-1; i++)
		new_ += res[i][0];
	
	return new_ + "@gmail.com";
}

int main()
{
	string a;
	getline(cin, a);
	cout << sx(a) << endl;
	return 0;
}
