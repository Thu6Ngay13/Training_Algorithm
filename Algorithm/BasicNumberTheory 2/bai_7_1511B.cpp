//Dung truong hop dac biet de giai bai nay
//x = a chu so
//y = b chu so
//c = uoc(x, y) co c chu so
//c thoa man >= min(a, b)
//
//VD
//a = 6
//b = 4
//c = 3
//->x : 1 000 000
//->y : 1 100 : (b - c + 1 so 1) + (c-1) so 0
//->c : 100


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void B1511(int n)
{
	
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a, b, c; cin >> a >> b >> c;
		string x = '1' + string(a-1, '0');
		string y = string(b-c+1, '1') + string(c-1, '0');
		cout << x << " " << y << endl;
	}
} 
