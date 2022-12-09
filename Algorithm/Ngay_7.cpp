#include <bits/stdc++.h>
using namespace std;

//////Sinh nhi phan
//////Sinh to hop
//////Sinh hoan vi
//////Sinh phan hoach

////<Xay dung cau hinh dau tien>
////
////while(<Chua Phai Cau Hinh Cuoi Cung>){
////	<In ra cau hinh hien tai>
////	<Sinh ra cau hinh tiep theo>
////}

//permutation
//next_permutation(): sinh ra hoan vi tiep theo
//prev_permutation(): sinh ra hoan vi phia truoc
//[x;y] 
//sort(a+x, a+y+1)
//reverse(a+x, a+y+1)
//next_permutation(a+x, a+y+1)


//-------------------------------------------------------------------------------------------

//	1.sinh xau nhi phan
//int n, x[100], ok;
//void ktao(){
//	//cau hinh dau tien deu la cac bit 0
//	for(int i = 1; i <= n; i++){
//		x[i] = 0;
//	}
//}
//void sinh(){
//	//bat dau tu bit cuoi cung trong cau hinh
//	//di tim bit dau tien = 0 tinh tu ben phai
//	int i = n;
//	while(i >= 1 && x[i] == 1){
//		x[i] = 0;
//		i--; // dich sang bit ben trai
//	}
//	if(i == 0) 
//		ok = false; // day la cau hinh cuoi cung
//	else
//		x[i] = 1;
//}

//-------------------------------------------------------------------------------------------

//	2.sinh to hop
//int n, k, x[100], ok;
//void ktao()
//{
//	for(int i = 1; i <= k; i++)
//		x[i] = i; // 1234....k
//}
//void sinh()    
//{
////bat dau tu bit thu K, kiem tra xem phan tu X[i] dat gia tri max hay chua
////X[i] = N - K + i ?
////X[i] == N - K + i => Khong the tang X[i] len duoc nua, dich sang trai
////X[i] != N - K + i => X[i]++, tat ca cac phan tu tu i + 1 => k, se tang dan tu X[i] mot don vi
//	int i = k;
//	while(i >= 1 && x[i] == n-k+i)
//		i--;	
////truong hop 1: i van nam trong doan [1, k]
////truong hop 2 : i = 0
//	if(i == 0)
//		ok = false;
//	else
//	{ 
//		x[i]++;
//		for(int j = i + 1; j <= k; j++)
//			x[j] = x[j-1] + 1;
//	}
//}

//-------------------------------------------------------------------------------------------

//	3.sinh hoan vi
//int n, a[100], ok;
//void ktao(){
//	//cau hinh dau tien deu la cac bit 0
//	for(int i = 1; i <= n; i++){
//		a[i] = i; // 1234....k
//	}
//}
//
//void sinh(){
////	bat dau tu vi tri n - 1: i = n - 1
////	chung nao a[i] > a[i + 1] thi phai dich sang ben trai
//	int i = n - 1;
//	while(i >= 1 && a[i] > a[ i + 1]){
//		i--;
//	}
//	
//	if(i == 0)
//		ok = false;
//	else{
////		a[i] < a[i + 1]
////		Di tim so dung sau vi tri i, > a[i], va nho nhat co the
//		int j = n; // bat dau tu chi so cuoi cung, bo qua cac vi tri ma a[j] < a[i]
//		while(a[i] > a[j]) 
//			--j; //dich trai
//			
////		a[j] : phan tu lon hon a[i] ma nho nhat
////		hoan vi hai vi tri a[i] va a[j]
//		swap(a[i], a[j]);
////		
////		sap xep cac phan tu tu i + 1 => n theo thu tu tang dan
////		sort(a + i + 1, a + n + 1); //O(nlogn)
////		
////		lat nguoc toan tu i + 1 => n
//		reverse(a + i + 1, a + n + 1); //O(n) : nhanh hon
//	}
//}

int main()
{

//	1.sinh xau nhi phan
//	cin >> n;
//	ok = true;
//	ktao();
//	while(ok)
//	{
//		for(int i = 1; i <= n; i++)
//			cout << x[i];
//		cout << endl;
//		sinh();
//	}
	
//-------------------------------------------------------------------------------------------
	
//	2.sinh to hop;
//	cin >> n >> k;
//	ktao();
//	ok = true;
//	while(ok)
//	{
//		for(int i = 1; i <= k; i++)
//			cout << x[i] << " ";
//		cout << endl;
//		sinh();
//	}
	
//-------------------------------------------------------------------------------------------

//	3.sinh hoan vi
//	cin >> n;
//	ktao();
//	ok = true;
//	while(ok){
//		for(int i = 1; i <= n; i++){
//			cout << a[i] << " ";
//		}
//		cout << endl;
//		sinh();
//	}
	
//-------------------------------------------------------------------------------------------
	
//	int a[5] = {1, 2, 3, 4, 5};
//	next_permutation(a, a+5);
//	for(int i = 0; i < 5; i++)
//		cout << a[i] << " ";
	
	int a[100];
	int n; cin >> n;
	for(int i = 1; i <= n; i++)
		a[i] = i;
		
	do
	{
		for(int i = 1; i <= n; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	while(next_permutation(a+1, a+n+1));
	
	
	return 0;
}

