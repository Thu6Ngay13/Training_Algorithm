#include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll tich_arr(vector<int> arr, int n)
{
	srand(time(NULL));
	for(int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}
		
	int modu = 1e9 + 7;
	ll tich = 1;
	
	for(vector<int>::iterator i = arr.begin(); i != arr.end(); i++)
	{
		tich = 1ll*tich*(*i%modu);
		tich = tich%modu;
	}
	return tich;
}

int main()
{
	int test_case;
	cin >> test_case;
	while(test_case--)
	{
		int n; cin >> n;
		vector<int> arr;
		cout << tich_arr(arr, n);
	}
	return 0;
}
