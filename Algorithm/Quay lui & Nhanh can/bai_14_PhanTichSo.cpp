#include <bits/stdc++.h>
using namespace std;

const int Max = 10000;
vector<int> vec;
set<string> se;
int n, x, arr[Max], sum;
void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		vec.push_back(arr[j]);
		sum += arr[j];
		if(sum < x)
			Try(i+1);
		else if(sum == x)
		{
			sort(vec.begin(), vec.end());
			bool ok = true;
			string s = "";
			s += "{";
			for(auto it:vec)
			{
				if(ok)
				{
					s += to_string(it);
					ok = false;
				}
				else
					s += " " + to_string(it);
			}
			s += "}";
			se.insert(s);
		}
		sum -= arr[j];
		vec.erase(vec.end()-1, vec.end());
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		sum = 0;
		cin >> n >> x;
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
		Try(1);
		if(se.size())
		{
			cout << se.size();
			for(auto it:se)
				cout << " " << it;
		}
		else
			cout << "-1" << endl;
		vec.clear();
		se.clear();
	}
	return 0;
}

