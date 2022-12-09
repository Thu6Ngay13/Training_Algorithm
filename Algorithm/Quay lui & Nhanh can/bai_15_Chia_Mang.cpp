
#include <bits/stdc++.h>
using namespace std;
const int Max = 100;

int n, k, arr[Max], no[Max], sum = 0, res = 0;
vector<vector<int>> vec;
vector<int> tmp;

void Try(int pos)
{
	if(res == sum)
		if(tmp.size())
			vec.push_back(tmp);
	for(int j = pos; j < n; j++)
	{
		if(res + arr[j] <= sum && no[j])
		{
			no[j] = 0;
			res += arr[j];
			tmp.push_back(arr[j]);
			Try(pos+1);
			res -= arr[j];
			tmp.erase(tmp.end()-1, tmp.end());
		}
		pos++;
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(no, 1, sizeof(no));
		vec.clear();
		tmp.clear();
		res = 0;
		sum = 0;
		cin >> n >> k;
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		if(sum % k)
			cout << 0;
		else
		{
			sort(arr, arr+n, greater<int>());
			sum /= k;
			cout << 1 << endl;
			Try(0);
			for(auto it:vec)
			{
				string s = "[";
				for(auto itt:it)
					s += to_string(itt) + " ";
				s.pop_back();
				s += "]";
				cout << s << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
