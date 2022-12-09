#include <bits/stdc++.h>
using namespace std;

string sx(string &a)
{
	for(int i = 0; i < a.size(); i++)
		a[i] = tolower(a[i]);
		
	stringstream ss(a);
	string new_ = {};
	string tmp;
	int cnt;
	
	while(ss >> tmp)
	{
		if(cnt > 1)
			new_ += ' ';
		new_ += tmp;
		cnt++;
	}
	for(int i = 0; i < new_.size(); i++)
		if((i == 0) || (new_[i-1] == ' '))
			new_[i] = toupper(new_[i]);
//	new_[new_.size()-1] = '\0';
	return new_;
}

int main()
{
	string a;
	getline(cin, a);
	cout << sx(a) << endl;
	return 0;
}
