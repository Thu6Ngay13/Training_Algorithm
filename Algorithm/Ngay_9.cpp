//Thuat to�n chuyen m� nhi ph�n sang m� gray :
//-bit dau ti�n cua m� gray v� m� nhi ph�n l� giong nhau
//-C�c bit c�n lai o vi tr� i cua m� gray c� duoc bang
//c�ch XOR 2 bit thi i v� thi i - 1 cua x�u nhi ph�n

#include <bits/stdc++.h>
using namespace std;

string change(string s)
{
	string tmp = "";
	tmp += s[0];
	for(int i = 1; i < s.size(); i++){
		if(s[i] == s[i-1]) tmp += '0';
		else tmp += '1';
	}
	return tmp;			
}

int main()
{
	string s;
	cin >> s;
	cout << change(s) << endl;
	return 0;
}

//---------------------------------------------------------------------------------

// Thuat to�n chuyen tu m� gray sang m� nhi ph�n
// -bit dau ti�n cua m� gray v� m� nhi ph�n l� giong nhau
// -C�c bit thu i c�n lai cua x�u nhi ph�n c� duoc bang c�ch : Kiem tra k� tu thu i cua m� gray
// -Neu bit thu i cua m� gray l� 0 th� bit thu i cua m� nhi ph�n se copy bit thu i - 1 cua m� nhi ph�n
// -Nguoc lai, th� bit thu i cua m� nhi ph�n se l� lat cua bit thu i - 1 cua m� nhi ph�n

#include <bits/stdc++.h> 
using namespace std;

string change(string s)
{
	string tmp = "";
	tmp += s[0];
	for(int i = 1; i < s.size(); i++){
		if(s[i] == '0') tmp += tmp[i-1];
		else {
			if(tmp[i-1] == '1') tmp += '0';
			else tmp += '1';
		}
	}
	return tmp;			
}

int main()
{
	string s;
	cin >> s;
	cout << change(s) << endl;
	return 0;
}

//---------------------------------------------------------------------------------

//sinh phan hoach : sinh cach bieu dien so tu nhien n duoi dang tong cua cac so tu nhien <= n

#include <bits/stdc++.h> 
using namespace std;

void next(int &cnt, int n, int arr[], int &ok)
{
	int i = cnt;
	while(i >= 1 && arr[i] == 1)
		i--;
	if(i == 0)
		ok = false;
	else
	{
		arr[i]--;
		int thieu = cnt - i + 1;
		int x = thieu/arr[i];
		int y = thieu%arr[i];
		cnt = i;
		for(int j = 1; j <= x; j++)
			arr[++cnt] = arr[i];
		if(y)
			arr[++cnt] = y;
	}
}

int main()
{
	int n, arr[1000];
	cin >> n;
	arr[1] = n;
	int cnt = 1;
	int ok = true;
	
	while(ok)
	{
		for(int i = 1; i <= cnt; i++)
			cout << arr[i] << " ";
		cout << endl;
		next(cnt, n, arr, ok);
	}
	return 0;
}
