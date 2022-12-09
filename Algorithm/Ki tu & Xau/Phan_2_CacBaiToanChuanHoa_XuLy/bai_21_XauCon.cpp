#include <bits/stdc++.h>
using namespace std;

//abcde
//azhuywfjalzabcde
//abcde


bool XauCon(string a, string b)
{
	int n1 = a.size();
	int n2 = b.size();
	for(int i = 0; i < n2; i++)
	{
		if(b[i] == a[0])
		{
			for(int j = 1; j < n1; j++)
			{
				if(b[i+j] != a[j])
					break;
				else if(j == n1-1 && a[j] == b[i+j])
					return true;
			}
		}
	}
	return false;	

//	int n1 = a.size(), n2 = b.size();
//	for(int i = 0; i < n1; i++){
//		if(b[i] == a[0]){
//			bool ok = true;
//			for(int j = 0; j < n2; j++){
//				if(a[i + j] != b[j]){
//					ok = false;
//				}
//			}
//			if(ok) return true;
//		}
//	}
//	return false; 
}

int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	cout << XauCon(a, b) << endl;
	return 0;
}
