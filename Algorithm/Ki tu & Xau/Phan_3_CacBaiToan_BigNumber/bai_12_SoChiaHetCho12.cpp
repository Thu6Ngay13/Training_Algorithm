#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool device_4(vector<string> s)
{
	int kq = 0;
	vector<string>::iterator it = s.end()-1;
	kq == stoi(*it) + stoi(*(it-1))*10;
	if(kq % 4 == 0)
		return true;
	return false;
}



int main()
{
	vector<string> s;
	string tmp;
	cin >> tmp;
	s.push_back(tmp);
	cout << device_4(s) << endl;
	return 0;
}
