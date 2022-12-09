#include <bits/stdc++.h> 
using namespace std;

int mpp(string s)
{
//	map<string, int> mp;
	set<string> se;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp)
		se.insert(tmp);
	return se.size();
		
		
//	
//	string str = mp.begin()->first;
//	int max = mp.begin()->second;
//	for(auto it:mp)
//		if(it.second > max)
//		{
//			max = it.second;
//			str = it.first;
//		}
//	return str + " " + to_string(max);
}

int main()
{
	string s;
	getline(cin, s);
	cout << mpp(s);
	return 0;
}
