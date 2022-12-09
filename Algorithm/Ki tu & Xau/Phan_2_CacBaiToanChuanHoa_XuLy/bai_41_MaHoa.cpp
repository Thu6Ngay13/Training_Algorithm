#include <bits/stdc++.h>
using namespace std;

string MaHoa(string s)
{
	string kq = {};
	multiset<char> us(s.begin(), s.end());
	for(int i = 0; i < s.size(); i++)
		if(us.find(s[i]) != us.end())
		{
			int tmp1 = us.size();
			us.erase(s[i]);
			int tmp2 = us.size();
			kq += s[i] + to_string(tmp1-tmp2);
		}
	return kq;
}

int main()
{
	string s;
	getline(cin, s);	
	cout << MaHoa(s) << endl;
	return 0;
}
