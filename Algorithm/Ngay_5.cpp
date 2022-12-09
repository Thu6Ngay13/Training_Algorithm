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

//----------------------------------------------------------------

//#include <set>
//set : CTDL 
//khong cho phep cac phan tu trung nhau
//tim kiem, xoa
//set<kieu_du_lieu> s:
//insert : them 1 phan tu vao set
//size() ; tra ve so luong phan tu trong set
//for each
//iterator :
//for(set<int>::iterator it = s.begin(); it != s.end(); it++)
//	cout << *it << endl; //* : giai tham chieu
//find() : O(logn)
//s.find(3) : tra ve iterator tro den phan tu 3
//neu khong co no se tra ve s.end()
//count : O(logn) : dem so lan xuat hien cua 1 phan tu trong set
//erase() : O(logn)

//multiset : van la set nhung cho phep cac phan tu trong set trun nhau
//ms.erase(phan_tu) : xoa het phan_tu

//unordered_set : khong co thu tu
//find : O(1) => te nhat len O(n)

//set<string> s;
//s.insert("abcd");
//s.insert("sdsf");
//s.insert("dfdfd");
//s.insert("abcd");
//van sap xep

#include <bits/stdc++.h>
using namespace std;
int main()
{
//	int a[10] = {2, 3, 4, 1, 5, 2, 5, 3, 1, 1};
//	set<int> s(a, a+10); //truyen tat ca phan tu cua a vao s
//	set<int> s(a.begin(), a.end()) //truyen vao neu la vector
	unordered_set<int> s;
	s.insert(2);
	s.insert(1);
	s.insert(3);
	s.insert(2);
	s.insert(6);
	s.insert(7);
	s.insert(3);
	for(int x:s)
		cout << x << " ";
//	for(int i = 0; i < a.size(); i++)
//		s.insert(a[i]);
//	cout << s.size() << endl;
//	if(s.find(3) != s.end())
//		cout << "Tim Thay" << endl;
//	if(s.count(3) == 1)
//		cout << "Tim Thay" << endl;
//	s.erase(5); //xoa phan tu 5

//	multiset<int> ms(a, a+10);
//	for(int x:ms)
//		cout << x << " ";
	
	return 0;
}
