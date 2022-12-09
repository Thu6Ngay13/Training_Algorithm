#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void abc(int n)
{
	set<int> uoc;
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
		{
			n /= i;
			uoc.insert(i);
			break;
		}
		
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0 && uoc.count(i) == 0)
		{
			n /= i;
			uoc.insert(i);
			break;
		}
		
	if(uoc.size() < 2 
	|| n == 1 
	|| uoc.count(n) == 1)
		cout << "NO" << endl;
	else
	{
		uoc.insert(n);
		cout << "YES" << endl;
		for(auto x:uoc)
			cout << x << " ";
		cout << endl;
	}
	
	
	
//	if(n < 24)
//	{
//		cout << "NO" << endl;
//		return;
//	}
//	else if(n == 24)
//	{
//		cout << "YES" << endl;
//		cout << 2 << " " << 3 << " " << 4 << endl;
//		return;
//	}
//	else
//	{
//		int res = n;
//		for(int i = 2; i <= sqrt(n); i++)
//			if(n % i == 0)
//			{
//				int tmp1 = i;
//				n /= i;
//				for(int j = i+1; j <= sqrt(n); j++)
//					if(n % j == 0)
//					{
//						int tmp2 = j;
//						n /= j;
//						if(n*tmp1*tmp2 == res && n != tmp1 && n != tmp2)
//						{
//							cout << "YES" << endl;
//							cout << tmp1 << " " << tmp2 << " " << n << endl;
//							return;
//						}	
//					}	
//			}
//		cout << "NO" << endl;
//	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n; cin >> n;
		abc(n);
	}
}
