#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000001; //tran stack nen dung cach khac

void sang(int n)
{
	bool nt[MAX];
	for(int i = 2; i < MAX; i++)
		nt[i] = true;
	nt[0] = nt[1] = false;
	for(int i = 2;i <= sqrt(MAX); i++)
		if(nt[i])
			for(int j = i*i; j < MAX; j += i)
				nt[j] = false;
	for(int i = 2; i <= n; i++)	
		if(nt[i])
			cout << i << " ";

}
int main()
{
	int n; cin >> n;
	sang(n);
	return 0;
}
