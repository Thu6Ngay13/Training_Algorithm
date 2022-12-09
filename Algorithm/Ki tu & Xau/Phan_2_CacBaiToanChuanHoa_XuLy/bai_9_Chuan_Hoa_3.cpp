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
	for(int i = 0; i < new_.size(); i++)
		new_[i] = toupper(new_[i]);
	new_ += ',';
	
	for(int i = 0; i < cnt-1; i++)
	{
		res[i][0] = toupper(res[i][0]);
		new_ += ' ';
		new_ += res[i];
	}
	
	return new_;
}

int main()
{
	string a;
	getline(cin, a);
	cout << sx(a) << endl;
	return 0;
}
