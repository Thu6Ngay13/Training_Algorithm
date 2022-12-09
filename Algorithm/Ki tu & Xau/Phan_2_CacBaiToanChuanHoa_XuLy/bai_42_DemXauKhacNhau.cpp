#include <bits/stdc++.h>
using namespace std;

int check(vector<string> s)
{
	set<string> se(s.begin(), s.end());
	return se.size();
}


int main()
{
	int n;
	vector<string> s;
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++)
	{
		string tmp;
		getline(cin, tmp);
		s.push_back(tmp);
	}
	cout << check(s);
	return 0;
}
