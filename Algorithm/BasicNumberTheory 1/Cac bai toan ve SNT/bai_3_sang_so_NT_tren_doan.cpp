#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000001; //tran stack

void sang(int l, int r)
{
	bool nt[r-l+1];
	for(int i = l; i <= r; i++)
		nt[i-l] = true;
	for(int i = 2; i <= sqrt(r); i++)
			for(int j = max(i*i, (l+i-1)/i*i); j < r; j += i)
				nt[j-l] = false;
	for(int i = max(2, l); i < r-l+1; i++)
		if(nt[i-l])
			cout << i << " ";
}
int main()
{
	int l, r;
	cin >> l >> r;
	sang(l, r);
	return 0;
}
