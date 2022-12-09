#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string s = "";
int x[20], ans = -1;

bool check(ll tmp){
	ll rs = cbrt(tmp);
	return 1ll*rs*rs*rs == tmp && tmp;
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == s.size()-1){
			ll tmp = 0;
			for(int k = 0; k < s.size(); k++){
				if(x[k])
					tmp = tmp*10 + (s[k]-'0');
			}
			if(check(tmp) && ans < tmp)
				ans = tmp;
		}
		else
			Try(i+1);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		ans = -1; cin >> s;
		Try(0);
		cout << ans << endl;
	}
	return 0;
}

