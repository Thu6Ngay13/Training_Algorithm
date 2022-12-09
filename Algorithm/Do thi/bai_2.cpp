#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
using ll = long long;


int main(){
	int n; cin >> n;
	cin.ignore();
	vector<int> v[n+1];
	for(int i = 1; i <= n; i++){
		string s; getline(cin , s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			if(stoi(tmp) > i)
				v[i].push_back(stoi(tmp));
		}
	}
	for(int i = 1; i <= n; i++)
		for(auto it:v[i])
			cout << i << " " << it << endl;
	return 0;
}

