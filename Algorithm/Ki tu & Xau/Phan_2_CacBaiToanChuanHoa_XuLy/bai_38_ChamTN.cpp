#include <bits/stdc++.h>
using namespace std;
	

int main()
{
	map<pair<int, int>, char> mp;
	string s1 = "ABBADCCABDCCABD";
	string s2 = "ACCABCDDBBCDDBB";
	
	for(int i = 1; i <= 15; i++)
		mp[make_pair(101, i)] = s1[i-1];
	for(int i = 1; i <= 15; i++)
		mp[make_pair(102, i)] = s2[i-1];
	
//	for(auto x:mp)	
//		cout << (x.first).second << endl;
	
	int made; cin >> made;
	char c[16];
	for(int i = 1; i <= 15; i++)
		cin >> c[i];
	int tmp = 0;
	for(int i = 1; i <= 15; i++)
		if(mp[{made, i}] == c[i])
			tmp++;
	cout << 10.0*tmp/15 << endl;
	
	
	return 0;
}
