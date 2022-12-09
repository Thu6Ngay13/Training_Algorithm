#include <bits/stdc++.h>
using namespace std;
const int Max = 1234;
bool cmp(int a, int b){
	return a%2;
}
int main(){
	int t = 1;
	while(t--){
		int n, arr[Max];
		vector<int> v1, v2;
		cin >> n;
		
		for(int i = 0; i < n; i++){
			cin >> arr[i];
			if(arr[i]%2)
				v1.push_back(arr[i]);
			else
				v2.push_back(arr[i]);
		}
			
		sort(v1.begin(), v1.end(), greater<int>());
		sort(v2.begin(), v2.end());
		
		int i = 0, j = 0;
		for(int k = 0; k < n; k++){
			if(arr[k]%2)
				cout << v1[j++] << " ";
			else 
				cout << v2[i++] << " ";
		}
	}
	return 0;
}
