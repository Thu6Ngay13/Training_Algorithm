#include <bits/stdc++.h>
using namespace std;

string KiTuKhongLap(string s)
{
	string kq = {};
	int arr[100000] = {0};
	for(int i = 0; i < s.size(); i++)
		arr[s[i]]++;
	for(int i = 1; i < 257; i++)
		if(arr[i] == 1)
			kq += char(i);
	return kq;
}

int main()
{
	string s;
	getline(cin, s);
	cout << KiTuKhongLap(s) << endl;
	return 0;
}
