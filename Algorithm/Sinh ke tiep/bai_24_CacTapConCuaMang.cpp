#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void sinh(int n, string &s, int &ok)
{
	int i = n-1;
	while(i >= 0 && s[i] == '1')
	{
		s[i] = '0';
		i--;
	}
	if(i == -1)
		ok = false;
	else
		s[i] = '1';
}

bool cmp(string a, string b)
{
	if(a.size() != b.size())
		return a.size() < b.size();
	return a < b;
}

int main()
{
	int n, arr[1005]; cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
		
	sort(arr, arr+n);
	string s(n, '0');
	vector<string> vec;
	int ok = true;
	
	while(ok)
	{
		string tmp = "";
		for(int i = 0; i < n; i++)
			if(s[i] == '0')
				tmp += to_string(arr[i]);
		if(tmp.size() != 0)
			vec.push_back(tmp);
		sinh(n, s, ok);
	}
	
	sort(vec.begin(), vec.end(), cmp);
	for(auto x:vec)
		cout << x << endl;
	cout << vec.size() << endl;
	return 0;
}
