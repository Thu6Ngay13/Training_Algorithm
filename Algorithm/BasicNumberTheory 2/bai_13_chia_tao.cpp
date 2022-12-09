//chia keo cua euler
//n : qua tao
//m : cai hop
//
//* * * * n : qua tao : co n - 1 vi tri de dua cai gay vao
//m : cai hop can m - 1 cai gay
//(n-1)C(m-1)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll chia_tao(int m, int n)
{
	ll kq = 1;
	int q = m-1;
	int k = n-1;
	//pCk
	for(int i = 1; i <= k; i++)
		kq *= 1ll*(q-i+1)/i;
	return kq;
}


int main()
{
	int m, n;
	cin >> m >> n;
	cout << chia_tao(m, n) << endl;
	return 0;
}
