//chua lam duoc

#include <bits/stdc++.h>
using namespace std;

void TuRieng(string a, string b)
{
	stringstream ss1(a);
	stringstream ss2(b);
	string tmp1;
	string tmp2;
	string res1[1000];
	string res2[1000];
	int cnt1 = 0;
	int cnt2 = 0;
	
	while(ss1 >> tmp1)
		res1[cnt1++] = tmp1;
	while(ss2 >> tmp2)
		res2[cnt2++] = tmp2;
	
	for(int i = 0; i < cnt1-1; i++)
		for(int j = i+1; j < cnt1; j++)
			if(res1[i] > res1[j])
			{
				string zz = res1[j];
				res1[j] = res1[i];
				res1[i] = zz;
			}
			
	for(int i = 0; i < cnt2-1; i++)
		for(int j = i+1; j < cnt2; j++)
			if(res2[i] > res2[j])
			{
				string zz = res2[j];
				res2[j] = res2[i];
				res2[i] = zz;
			}
}

int main()
{
	string a, b;
	getline(cin, a);
	getline(cin, b);
	TuRieng(a, b);
	return 0;
}
