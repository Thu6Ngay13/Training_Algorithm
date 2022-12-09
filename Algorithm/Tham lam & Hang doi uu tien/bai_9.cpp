#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct CV{
	int id;
	int dl;
	int prf;
};

bool cmp(CV a, CV b){
	return a.prf > b.prf;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		CV cv[n];
		for(int i = 0; i < n; i++)
			cin >> cv[i].id >> cv[i].dl >> cv[i].prf;
		sort(cv, cv+n, cmp);
		bool a[n];
		memset(a, true, sizeof(a));
		int cnt = 0;
		ll profit = 0;
		for(int i = 0; i < n; i++){
			for(int j = cv[i].dl-1; j >= 0; j--)
				if(a[j]){
					cnt++;
					profit += cv[i].prf;
					a[j] = false;
					break;
				}
		}
		cout << cnt << " " << profit << endl;
	}
	return 0;
}

