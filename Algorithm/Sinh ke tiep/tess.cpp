#include <iostream> 
#include <set>
using namespace std;

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

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n; cin >> n; cin.ignore();
		string a; getline(cin, a);
		
		string s(n, '0');
		int ok = true;
		set<string> se;
		
		while(ok)
		{
			string tmp = "";
			for(int i = 0; i < n; i++)
				if(s[i] == '1')
					tmp += a[i];
			if(tmp.size() != 0)
				se.insert(tmp);
			sinh(n, s, ok);
		}
		for(auto x:se)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}
