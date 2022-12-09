#include <bits/stdc++.h>
using namespace std;
const int Max = 123456;

int main(){
	int t; cin >> t;
	while(t--){
//		int n, arr[Max];
//		bool number[10] = {false};
//		cin >> n;
//		for(int i = 0; i < n; i++){
//			cin >> arr[i];
//			int tmp = arr[i];
//			while(tmp){
//				number[tmp%10] = true;
//				tmp /= 10;
//			}
//		}
//		for(int i = 0; i < 10; i++)
//			if(number[i])	
//				cout << i << " ";
//		cout << endl;
		int n; cin >> n;
		cin.ignore();
		string s;
		getline(cin, s);
		set<char> se;
		for(int i = 0; i < s.size(); i++)
			if(s[i] != ' ')
				se.insert(s[i]);
		for(set<char>::iterator it = se.begin(); it != se.end(); it++)
			cout << *it << " ";
		cout << endl;
	}
	return 0;
}
