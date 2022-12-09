#include <bits/stdc++.h>
using namespace std;

string sx(string a)
{
	for(int i = 0; i < a.size()-1; i++)
		for(int j = i + 1; j < a.size(); j++)
			if(a[i] > a[j])
			{
				char tmp = a[j];
				a[j] = a[i];
				a[i] = tmp;
			}
	return a;
}

int main()
{
	string a;
	getline(cin, a);
	cout << sx(a) << endl;
	return 0;
}
