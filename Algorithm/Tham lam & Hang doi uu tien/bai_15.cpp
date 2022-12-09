#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int t; cin >> t;
	while(t--){
		int n, s, m; cin >> n >> s >> m;
		ll luongthuccan = 1ll*s*m;
		int ngaycothemua = s - s/7;
		if(n*ngaycothemua >= luongthuccan){
			for(int i = 1; i <= ngaycothemua; i++)
				if(n*i >= luongthuccan){
					cout << i << endl;
					break;
				}
		}
		else
			cout << -1  << endl;
	}
	return 0;
}

