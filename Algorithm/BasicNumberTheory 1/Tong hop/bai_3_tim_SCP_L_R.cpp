//sang so chinh phuong 

#include <bits/stdc++.h>
using namespace std;
//bool so_CP(int n);
//void xuat_SCP(int l, int r);


int main()
{
	int test_case; cin >> test_case;
	while(test_case--)
	{
//		int l , r; cin >> l >> r;
//		xuat_SCP(l, r);
//		cout << endl;
		int l, r; cin >> l >> r;
		int c1 = sqrt(l);
		int c2 = sqrt(r);
		if(c1*c1 < l)
			c1++;
		for(int i = c1; i <= c2; i++)
			cout << i*i << " ";
		cout << endl;
		//dem so SCP
		cout << c2 - c1 + 1 << endl;
		
	}
	return 0;
}

//bool so_CP(int n)
//{
//	for(int i = 1; i <= sqrt(n); i++)
//		if(i*i == n)
//			return true;
//	return false;
//}
//
//void xuat_SCP(int l, int r)
//{
//	for(int i = l; i <= r; i++)
//		if(so_CP(i))
//			cout << i << " ";
//}

