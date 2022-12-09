#include <bits/stdc++.h>
using namespace std;

int dem_tu(string a)
{
	int dem = 0; 
	stringstream ss(a);
	string tmp;
	while(ss >> tmp)
		dem++;
	return dem;
}

int main()
{
	string a;
	getline(cin, a);
	cout <<	dem_tu(a) << endl;
	return 0;
}
