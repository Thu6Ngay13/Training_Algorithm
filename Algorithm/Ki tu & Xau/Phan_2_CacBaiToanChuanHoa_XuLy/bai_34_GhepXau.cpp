#include <bits/stdc++.h>
using namespace std;

string GhepXau(string s, int n)
{
	stringstream ss(s);
	string res[1000] = {};
	int cnt = 0;
	
	while(ss >> res[cnt++]);
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(res[j] < res[i])
			{
				string tmp = res[i];
				res[i] = res[j];
				res[j] = tmp;
			}
			
	string kq = {};
	for(int i = 0; i < n; i++)
		kq += res[i];
	return kq;
}



int main()
{
	int n;
	string s;
		
	cin >> n;
	cin.ignore();
	getline(cin, s);
	cout << GhepXau(s, n) << endl;
	return 0;
}
