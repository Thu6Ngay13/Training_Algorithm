#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 100;
int n, m, arr[Max], no[Max], mi, sum;
Try(int i, int pos){
	if(i == 3)
		mi = min(mi, m-sum);
	for(int j = pos; j < n; j++){
		if(no[j] && sum+arr[j] <= m){
			no[j] = 0;
			sum += arr[j];
			Try(i+1, j+1);
			no[j] = 1;
			sum -= arr[j];
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		mi = m, sum = 0;
		memset(no, 1, sizeof(no));
		for(int i = 0; i < n; i++)	
			cin >> arr[i];
		Try(0, 0);
		cout << m - mi << endl;
	}
	return 0;
}
