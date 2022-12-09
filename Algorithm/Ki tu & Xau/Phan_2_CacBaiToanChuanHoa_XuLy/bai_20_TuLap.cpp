#include <bits/stdc++.h>
using namespace std;

string TuLap(string s)
{
	stringstream ss(s);
	string res[1000] = {};
	int cnt = 0;
	while(ss >> res[cnt++]);
	
	int arr[cnt] = {};
	for(int i = 0; i < cnt-1; i++)
		if(arr[i] == 0)
			for(int j = i+1; j < cnt; j++)
			{
				int tmp = 0;
				if(res[i] == res[j] && tmp == 0)
				{
					tmp++;
					arr[i] = arr[j] = j-i;
				}
				else if(res[i] == res[j])
					arr[j] = arr[i];
				else
					arr[j] = cnt;
			}
			
	int min = cnt;
	string Tu = {};
	for(int i = 0; i < cnt; i++)
		if(arr[i] < min)
		{
			min = arr[i];
			Tu = res[i];
		}
		
	if(min != 0)
		return Tu;
	return "-1";
}

int main()
{
	string s;
	getline(cin, s);
	cout << TuLap(s) << endl;
	return 0;
}
