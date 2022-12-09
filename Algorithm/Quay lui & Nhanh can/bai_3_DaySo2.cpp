#include <bits/stdc++.h>
using namespace std;

int n, arr[20];
vector<vector<int>> vec;
vector<int> res;

void Try(int i)
{
	if(i == 0)
	{
		vec.push_back(res);
		res.clear();
		return;
	}
	else
	{	
		vec.push_back(res);
		res.clear();
		for(int j = 0 ; j < i; j++)
		{
			arr[j] += arr[j+1];
			res.push_back(arr[j]);
		}
		Try(i-1);
	}
}

bool cmp(vector<int> a, vector<int> b)
{
	return a.size() < b.size();
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		res.clear();
		vec.clear();
		cin >> n;
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
			res.push_back(arr[i]);
		}
		
		Try(n-1);
		sort(begin(vec), end(vec), cmp);
		for(auto it:vec)
		{
			string s = "[";
			for(auto itt:it)
				s += to_string(itt) + " ";
			s.pop_back();
			s += "]";
			cout << s << " ";
		}
		cout << endl;
	}
	return 0;
}
