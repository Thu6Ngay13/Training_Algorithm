 #include <bits/stdc++.h>
using namespace std;

bool nt(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return false;
	return true;
}

bool chu_so_CCMax(int n)
{
	int max = n % 10;
	while(n)
	{
		if(max < n%10)
			return false;
		n /= 10;
	}
	return true;
}


int main()
{
	int n; cin >> n;
	for(int i = 2; i <= n; i++)
		if(nt(i) && chu_so_CCMax(i))
			cout << i << " ";
	cout << endl;
	return 0;
}
