#include <bits/stdc++.h> 
using namespace std;
void sinh(int n, char c[], int &ok)
{
	int i = n-1;
	while(i >= 1 && c[i] > c[i+1])
		i--;
	if(i == 0)
		ok = false;
	else
	{
		int j = n;
		while(c[i] > c[j]);
			j--;
		swap(c[i], c[j]);
		reverse(c+i+1, c+n+1);
	}
}

int main()
{
	int n; cin >> n;
	char c[100];
	for(int i = 1; i <= n; i++)
		c[i] = 'A'+i-1;
	int ok1 = true;
	while(ok1)
	{
		for(int i = 1; i <= n; i++)
			cout << c[i];
		cout << endl;
		sinh(n, c, ok1);
	}
	return 0;
}
