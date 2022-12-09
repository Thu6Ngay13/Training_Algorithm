#include <bits/stdc++.h>
using namespace std;

bool snt[500];
int s, p, n;
int sum = 0;
vector<vector<int>> vec;
vector<int> res;

void sang()
{
	memset(snt, 1, sizeof(snt));
	snt[0] = snt[1] = 0;
	for(int i = 2; i <= sqrt(500); i++)
		if(snt[i])
			for(int j = i*i; j < 500; j += i)
				snt[j] = 0;
}

void Try(int i, int pos)
{
	if(pos == n && sum == s)
		vec.push_back(res);
	else
		for(int j = i+1; j <= s; j++)
		{
			if(snt[j] && sum + j <= s)
			{
				sum += j;
				res.push_back(j);
				Try(j+1, pos+1);
				sum -= j;
				res.erase(res.end()-1, res.end());
			}	
			else if(sum + j > s)
				break;
		}
}

int main()
{
	sang();
	int t; cin >> t;
	while(t--)
	{
		sum = 0;
		res.clear();
		vec.clear();
		cin >> n >> p >> s;
		Try(p, 0);
		cout << vec.size() << endl;
		for(auto it:vec)
		{
			for(auto itt:it)
			{
				if(itt != *(it.end()-1))
					cout << itt << " ";
				else
					cout << itt;
			}
			cout << endl;
		}
	}

	return 0;
}
