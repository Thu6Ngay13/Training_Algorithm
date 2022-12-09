#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>> vec;
vector<int> res;
int n, x, arr[30];
int sum = 0;
void Try(int i)
{
	if(sum == x)
		vec.push_back(res);
	else
		for(int j = i; j < n; j++)
		{
			res.push_back(arr[j]);
			sum += arr[j];
			if(sum <= x)
				Try(i);
			res.erase(res.end()-1, res.end());
			sum -= arr[j];
			i++;
		}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		res.clear();
		vec.clear();
		cin >> n >> x;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		Try(0);
		if(vec.size())
		{
			cout << vec.size();
			for(auto it:vec)
			{
				string s = "{";
				for(auto itt:it)
					s += to_string(itt) + " ";
				s.pop_back();
				s += "}";
				cout << " " << s;
			}
		}
		else
			cout << "-1";
		cout << endl;
	}
	return 0;
}
