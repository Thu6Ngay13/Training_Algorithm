#include <bits/stdc++.h>
using namespace std;
//char 
//-128 -> 127
//A-Z : 65 - 90
//a-z : 97 - 122
//0-9 : 48 - 57

//bool islower(char c) : kiem tra in thuong
//bool isupper(char c) : kiem tra in hoa
//bool isalpha(char c) : kiem tra chu cai
//bool isdigit(char c) : kiem tra ki tu so
//int tolower(char c) : tra ve ma ascii cua ki tu dang in thuong cua no
//int toupper(char c) : tra ve ma ascii cua ki tu dang in hoa cua no 

//string

//to_string : chuyen 1 so thanh chuoi
//int i = 5; string s = to_string(i);

//stoi() : chuyen 1 sau ki tu ve so : int
//stoll() : chuyen 1 sau ki tu ve : long long
//reverse : lat nguoc xau

//cin.ignore():tranh thoi lenh
//getline(cin, s) : lay ca dau cach
//size(),length():tra ve do dai xau
//noi cac xau + : goi la nap chong, ==, != so sanh

//stringstream ten_bien(ten_xau_can_tach)
//getline(ss, ten_bien_luu, 'ki_tu_tach') : tach tu theo yeu cau
void dem_ki_tu(string s)
{
	int alpha[256] = {0};
	for(int i = 0; i < s.size(); i++)
		alpha[s[i]]++;
		
	int max = alpha[0];
	char kitu;
	for(int i = 0; i < 256; i++)
		if(alpha[i] > max)
		{
			max = alpha[i];
			kitu = (char)(i);
		}
	cout << kitu << " " << max << endl;
}

//tu code ham stoll
long long stoll(string s)
{
	long long kq = 0;
	int x = s.size();
	for(int i = 0; i < x; i++)
		kq = kq*10 + (int)(s[i]-'0');
	return kq;
}

//tu code ham to_string
string to_string(long long n)
{
	string res = "";
	while(n)
	{
		res += char(n%10 + '0');
		n /= 10;
	}
	//lat nguoc xau res // co the dung le lat nguoc vector
	reverse(res.begin(), res.end());
	return res;
}

/////////////////////////////////////////////////////
//vector<kieu_du_lieu> ten_vector;
//size() : tra ve kich thuoc cua vector
//v.push_back(x) : day phan tui x vao cuoi vector
//pop_back() : xoa 1 phan tu o cuoi vector
//erase : 

void vtor(vector<int> a)
{
	a.push_back(100);
	a.push_back(200);
	a.push_back(300);
	a.push_back(400);
	
	for(int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;
	
	for(int x:a)
		cout << x << " ";
	cout << endl;
	
	for(auto x:a)
		cout << x << " ";
	cout << endl;
	
	vector<int>::iterator it;
	for(it = a.begin(); it != a.end(); ++it)
		cout << *it << " ";
	cout << endl;
	
}


int main()
{
//string
	string s;
	getline(cin, s);
	
//vector
	int n; cin >> n;
	vector<int> a;
	vector<int> b(n); //khai bao san co n phan tu va co the cin >> a[i] luon.
	vector<int> c(n, 10); khai bao n phan tu, co gia tri : 10
	vtor(a);
	
	return 0;
}
