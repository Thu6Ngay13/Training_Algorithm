#include <bits/stdc++.h> 
using namespace std;
const int Max = 1000;


//-------------------------------------------------------------
////sinh nhi phan

//int cnt = 0;
//void Try(int n, int i, int arr[])
//{
//	cnt++;
//	for(int j = 0; j <= 1; j++)
//	{
//		arr[i] = j;
//		if(i == n)
//		{
//			for(int k = 1; k <= n; k++)
//				cout << arr[k];
//			cout << endl;
//		}
//		else
//			Try(n, i+1, arr);
//	}
//	cout << cnt << endl;
//}

//int main()
//{
//	int n, arr[Max] = {0};
//	cin >> n;
//	Try(n, 1, arr);
//	return 0;
//}

//-------------------------------------------------------------
////Sinh to hop chap k cua n

//int cnt = 0;
//void Try(int n, int k, int i, int arr[])
//{
//	for(int j = arr[i-1] + 1; j <= n - k + i; j++)
//	{
//		arr[i] = j;
//		if(i == k)
//		{
//			for(int h = 1; h <= k; h++)
//				cout << arr[h];
//			cout << endl;
//			cnt++;
//		}
//		else
//			Try(n, k, i+1, arr);
//	}
//}

//int main()
//{
//	int n, arr[Max] = {0}, k;
//	cin >> n >> k;
//	Try(n, k, 1, arr);
//	cout << cnt << endl;
//	return 0;
//}

//-------------------------------------------------------------
////Sinh chinh hop lap chap k cua n

//int cnt = 0;
//void Try(int n, int k, int i, int arr[])
//{
//	for(int j = 1; j <= n; j++)
//	{
//		arr[i] = j;
//		if(i == k)
//		{
//			for(int h = 1; h <= k; h++)
//				cout << arr[h];
//			cout << endl;
//			cnt++;
//		}
//		else
//			Try(n, k, i+1, arr);
//	}
//}

//int main()
//{
//	int n, arr[Max] = {0}, k;
//	cin >> n >> k;
//	Try(n, k, 1, arr);
//	cout << cnt << endl;
//	return 0;
//}

//-------------------------------------------------------------
////Sinh chinh hop chap k cua n

//int cnt = 0;
//void Try(int n, int k, int arr[], int chuaxet[], int i)
//{
//	for(int j = 1; j <= n; j++)
//	{
//		if(chuaxet[j])
//		{
//			arr[i] = j;
//			chuaxet[j] = false;
//			if(i == k)
//			{
//				for(int h = 1; h <= k; h++)
//					cout << arr[h];
//				cout << endl;
//			}
//			else
//				Try(n, k, arr, chuaxet, i+1);
//			chuaxet[j] = true;
//		}
//	}
//}

//int main()
//{
//	int n, k, arr[Max], chuaxet[Max];
//	cin >> n >> k;
//	memset(arr, 0, sizeof(arr));
//	memset(chuaxet, true, sizeof(chuaxet));
//	Try(n, k, arr, chuaxet, 1);
//	cout << cnt << endl;
//	return 0;
//}

//---- Cach khac.










