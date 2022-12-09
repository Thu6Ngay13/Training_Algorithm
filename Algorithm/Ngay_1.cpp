#include <bits/stdc++.h>
#define ll long long
//using ll = long long;
//typedef long long ll;

using namespace std;
 
// 1.
//sang so nguyen to
const int MAX = 10000001;
bool NT[MAX];

void sang()
{
	for(int i = 0; i < MAX; i++)
		NT[i] = true;
	for(int i = 2; i <= sqrt(MAX); i++)
		if(NT[i])
			for(int j = i*i; j < MAX; j += 2)
				NT[j] = false;
}

//phan tich so nguyen to //cach duy nhat
//n == p1^l1 + p2^2 + ... + pn^ln => d(n) = (l1+1)*(l2+1)8...*(ln+1) so uoc cua n
//tinh ti'ch cac uoc cua n => u(n) = n^(d(n)/2)
void phantich(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
		while(n % i == 0)
		{
			cout << i << " ";
			n /= i;
		}
	if(n > 1)
		cout << n << endl;
}

// 2. 
//uoc chung lon nhat //ham co san __gcd(a, b)
ll gcd(ll a, ll b)
{
	if(b == 0) return a;
	else return gcd (b, a % b);
}

//boi chung nho nhat
ll lcm(ll a, ll b)
{
	return a/gcd(a, b)*b;
}

// 3.
//dong du
//(A+B) % C = ((A%C) + (B%C)) % C
//(A-B) % C = ((A%C) - (B%C)) % C
//(A*B) % C = ((A%C) * (B%C)) % C
//(A^B) % C = 	((A%C) ^ B) % C
//(A/B) % C = (A%C * B^-1) % C

// 4.
//luy thua nhi phan
//Binary exponentiation
ll luy_thua(ll a, ll b) // a^b
{
	if(b == 0)
		return a;
	ll x = luy_thua(a, b/2);
	if(b % 2 == 1)
		return x * x * a;
	else 
		return x * x;
}
 
ll luy_thua_2(ll a, ll b)
{
	ll res = 1;
	while(b)
	{
		if(b % 2 == 1)
			res *= a;
		b /= 2;
		a *= a;
	}
	return res;
}

// 5.
//to hop chap k cua n
ll nCk(int n, int k)
{
	ll res = 1;
	k = min(k, n-k); // tim min, nCk va (n-k)Ck
	for(int i = 0; i <= k-1; i++)
	{
		res *= (n-i);
		res /= (i+1);
	}
	return res;
}

//chinh hop chap k cua n
ll nAk(int n, int k)
{
	ll res = 1;
	for(int i = 1; i <= k-1; i++)
		res *= (n-i);
	return res;
}

// 12.
//cong thuc legendre
//tim x sao cho n! chia het cho k^x voi x : max
//cach co ban
int degree(int n, int k)
{
	int dem = 0;
	for(int i = k; i <= n; i += k)
	{
		int m = i;
		while(m % k == 0)
		{
			dem++;
			m /= k;
		}
	}
	return dem;
}

//dung cong thuc legendre 
int legendre(int n, int k)
{
	int dem = 0;
	for(int i = k; i <= n; i *= k)
		dem += n/i;
	return dem;
}
 
int main()
{
//	#ifndef ONLINE_JUDGE
//	freopen("intput.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	#endif 
	cout << legendre(10, 3);
	
	return 0;
}
