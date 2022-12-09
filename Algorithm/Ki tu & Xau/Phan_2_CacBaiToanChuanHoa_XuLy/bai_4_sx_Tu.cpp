//voi number
//sort(a, a+n); //a o day la con tro tro den phan tu dau tien, a+n den phan tu cuoi
//sort(a, a+n, greater<int>) sx theo giam dan

//voi vector
//sort(v.begin(), b.end());
//sort(v.begin(), b.end(), greater<int>());

//voi string
//sort(s.begin(), s.end());

//comparator vidu: greater<int> : giam dan
//tra ve true hoac false
//true : a truoc b 
//false : a dung sau b
//ban dau a dung truoc b
//int a[10] = {10, 9, 8, 4, 3, 2, 1, 7, 6, 5};
//bool cmp(int a, int b)
//{
////	if(a < b) return true; cach
////	return false; 			1
//		return a < b; cach 2
//}
//soft(a, a+10, cmp);

//quick : not stable soft : thuat toan khong on dinh
//sort : duoc xay dung theo quick sort

//if(a.size() != b.size()) 
//	return a.size() < b.size();
//return a < b;

#include <bits/stdc++.h>
using namespace std;

string sx(string s)
{
//	stringstream ss(a);
//	string tmp1;
//	string tmp2[1000];
//	string kq = {};
//	int cnt = 0;
//	
//	while(ss >> tmp1)
//	{
//		tmp2[cnt] = tmp1;
//		cnt++;
//	}
	
	sort(s.begin(), s.end());
//	for(int i = 0; i < cnt-1; i++)
//		for(int j = i + 1; j < cnt; j++)
//			if(tmp2[i] > tmp2[j])
//			{
//				string tmp3 = tmp2[i];
//				tmp2[i] = tmp2[j];
//				tmp2[j] = tmp3;
//			}
//	for(int i = 0; i < cnt; i++)
//		kq += tmp2[i] + ' ';
//	return kq;
	return s;
}

int main()
{
	string s;
	getline(cin, s);
	cout << sx(s) << endl;
	return 0;
}
