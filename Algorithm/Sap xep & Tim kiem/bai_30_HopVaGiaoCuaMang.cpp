#include <bits/stdc++.h>
using namespace std;
const int Max = 54321;

//3 5
//1 2 3
//1 2 3 5 9

int main(){
	int t = 1;
	while(t--){
		int n, m, arr[Max], brr[Max], hop[Max], giao[Max];
		cin >> n >> m;
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		for(int i = 0; i < m; i++)
			cin >> brr[i];
			
		int a = 0, b = 0;
		int h = 0, g = 0;
		while(a < n && b < m){
			if(arr[a] == brr[b]){
				hop[h++] = arr[a++];
				giao[g++] = arr[a++];
			}
			else if(arr[a] > brr[b])
				hop[h++] = brr[b++];
			else
				hop[h++] = arr[a++];
		}
		while(a < n)
			hop[h++] = arr[a++];
		while(b < m)
			hop[h++] = brr[b++];
			
		for(int i = 0; i < h; i++)
			cout << hop[i] << " ";
		cout << endl;
		for(int i = 0; i < g; i++)
			cout << giao[i] << " ";
		cout << endl;
	}
	return 0;
}
