#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int t; cin >> t;
	while(t--){
		int m, n, p;
		cin >> m >> n >> p;
		vector<ll> vec1(m), vec2(n), vec3(p);
		for(int i = 0; i < m; i++)
			cin >> vec1[i];
		for(int i = 0; i < n; i++)
			cin >> vec2[i];
		for(int i = 0; i < p; i++)
			cin >> vec3[i];
		int i = 0, j = 0, k = 0;
		while(i < m && j < n && k < p){
			if(vec1[i] == vec2[j] && vec2[j] == vec3[k]){
				cout << vec1[i] <<  " ";
				i++; j++; k++;
			}
			ll tmp = min({vec1[i], vec2[j], vec3[k]});
			if(tmp == vec1[i])
				i++;
			else if(tmp == vec2[j])
				j++;
			else
				k++;
		}
	}
	return 0;
}
