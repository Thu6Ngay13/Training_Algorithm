#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[1005] = {0}, 
		brr[1005] = {0}, 
		ansrr[1006] = {0};
	string a, b;
	getline(cin, a);
	getline(cin, b);
	
	int na = a.size();
	int nb = b.size();
	int max_ab = max(na, nb);
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	
	if(na > nb)
	{
		for(int i = 0; i < na; i++)
			arr[i] = a[i] - '0';
		for(int i = 0; i < nb; i++)	
			brr[i] = b[i] - '0';
	}
	else
	{
		for(int i = 0; i < na; i++)
			brr[i] = a[i] - '0';
		for(int i = 0; i < nb; i++)	
			arr[i] = b[i] - '0';
	}
	
	int tmp = 0;
	int cnt = 0;
	for(int i = 0; i < max_ab; i++)
	{
		int check = arr[i] - brr[i] - tmp;
		if(check < 0)
		{
			tmp++;
			ansrr[i] = check + 10;
		}
		else
			ansrr[i] = check;
		cnt++;
	}
	if(tmp)
		arr[++cnt] = tmp;
	
	for(int i = cnt-1; i >= 0; i--)
		cout << ansrr[i];
	return 0;
}
