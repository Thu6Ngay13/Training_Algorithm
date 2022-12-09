#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool device_6(vector<string> s)
{
	ll kq = 0;
	for(vector<string>::iterator it = s.begin(); it != s.end(); it++) 
		kq += (char)(*it) - '0';
	if(kq % 3 == 0 && kq % 2 == 0)
		return true;
	return false;
}



int main()
{
	vector<string> s;
	string tmp;
	getline(cin, tmp);
	s.push_back(tmp);
	cout << device_6(s) << endl;
	return 0;
}
