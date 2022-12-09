//Thuat toán chuyen mã nhi phân sang mã gray :
//-bit dau tiên cua mã gray và mã nhi phân là giong nhau
//-Các bit còn lai o vi trí i cua mã gray có duoc bang
//cách XOR 2 bit thi i và thi i - 1 cua xâu nhi phân

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

// Thuat toán chuyen tu mã gray sang mã nhi phân
// -bit dau tiên cua mã gray và mã nhi phân là giong nhau
// -Các bit thu i còn lai cua xâu nhi phân có duoc bang cách : Kiem tra kí tu thu i cua mã gray
// -Neu bit thu i cua mã gray là 0 thì bit thu i cua mã nhi phân se copy bit thu i - 1 cua mã nhi phân
// -Nguoc lai, thì bit thu i cua mã nhi phân se là lat cua bit thu i - 1 cua mã nhi phân

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
