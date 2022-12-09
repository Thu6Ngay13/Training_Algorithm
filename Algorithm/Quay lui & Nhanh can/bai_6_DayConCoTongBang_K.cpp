#include <bits/stdc++.h>
using namespace std;

int n, k, arr[150];
int sum = 0;
vector<vector<int>> vec;
vector<int> res;

void Try(int i)
{
	if(sum == k)
		vec.push_back(res);
	else
		for(int j = i; j < n; j++)
		{
			if(sum + arr[j] <= k)
			{
				sum += arr[j];
				res.push_back(arr[j]);
				Try(i+1);
				sum -= arr[j];
				res.erase(res.end()-1, res.end());
			}
			i++;
		}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		vec.clear();
		res.clear();
		sum = 0;
		cin >> n >> k;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr+n);
		Try(0);
		
		if(vec.size())
			for(auto it:vec)
			{
				string s = "[";
				for(auto itt:it)
					s += to_string(itt) + " ";
				s.pop_back();
				s += "]";
				cout << s << " ";
			}
		else	
			cout << "-1";
		cout << endl;
	}
	return 0;
}
