//chua lam duoc


#include <bits/stdc++.h>
using namespace std;

string TongDaThuc(string a, string b)
{
	string xnew = a + b;
	stringstream ss(xnew);
	map<string, int> mp;
	string tmp;
	
	while(ss >> tmp)
	{
		for
	}
	
	string kq = {};
	for(auto x:mp)
		kq += "x.second" + "x.first" + " ";
	return kq;
		
	
}

int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	cout << TongDaThuc(a, b) << endl;
	return 0;
}
