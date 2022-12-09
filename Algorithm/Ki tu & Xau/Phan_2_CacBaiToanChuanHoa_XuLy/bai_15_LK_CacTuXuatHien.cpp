#include <bits/stdc++.h>
using namespace std;

void dem(string s)
{
	for(int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
		
	stringstream ss(s);
	string tmp;
	string res[1000];
	int cnt = 0;
	
	while(ss >> tmp)
		res[cnt++] = tmp;
	
	int x[1000] = {0};
	for(int i = 0; i < cnt-1; i++)
		if(x[i] == 0)
		{
			x[i]++;
			for(int j = i+1; j < cnt; j++)
				if(res[i] == res[j])
				{
					x[i]++;
					x[j] = -1;
				}
		}
		
	for(int i = 0; i < cnt; i++)
		if(x[i] > 0)
			cout << res[i] << endl;
}

int main()
{
	string s;
	getline(cin, s);
	dem(s);
	return 0;
}
