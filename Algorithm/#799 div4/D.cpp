#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int tt; cin >> tt;
	while(tt--){
		char c[5]; for(int i = 0; i < 5; i++) cin >> c[i];
		int t; cin >> t;
		int x = t/60, y = t%60;
		int hh = (c[0]-'0')*10 + (c[1]-'0');
		int mm = (c[3]-'0')*10 + (c[4]-'0');
		int cnt = (hh == (mm%10*10+mm/10));
		int p = (hh + x + (mm + y)/60)%24;
		int q = (mm + y)%60;
		while(p != hh || q != mm){
			cnt += (p == (q%10*10+q/10));
			p = (p + x + (q + y)/60)%24;
			q = (q + y)%60;
		}
		cout << cnt << endl;
	}
	return 0;
}

