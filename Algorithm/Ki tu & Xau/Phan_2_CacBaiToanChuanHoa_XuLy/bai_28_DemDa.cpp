#include <bits/stdc++.h>
using namespace std;

int XepDa(string s)
{
	int tmp = s.size();
	int arr[tmp] = {0};
	int dem = 0;
	
	for(int i = 1; i < tmp; i++)
		if(s[i] == s[i-1])
		{
			int x = 0;
			arr[dem] = 1;
			for(i+1; i < tmp; i++)
				if(s[i] == s[i-1])
					arr[dem]++;
				else if(s[i] != s[i-1] && x == 0)
				{
					x++;
					for(int j = i; j < tmp-1; j++)
					{
						if(s[j] == s[j+1])
							arr[dem]++;
						else
							break;
					}
				}
				else
					break;
			dem++;
		}
	int min = arr[0];
	for(int i = 0; i < dem; i++)
		if(arr[i] < min)
			min = arr[i];
	return min;
} 

int main()
{
	string s;
	getline(cin, s);
	cout << XepDa(s) << endl;
	return 0;
}
