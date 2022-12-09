#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 100;

int n, arr[Max], no[Max], mi, ok;
ll S, sum;
void Try(int i){
	if(sum == S){
		mi = min(mi, i);
		ok = 1;
	}
	for(int j = 1; j <= n; j++){
		if(no[j] 
		&& sum + arr[j] <= S 
		&& i+1 <= mi){
			no[j] = 0;
			sum += arr[j];
			Try(i+1);
			no[j] = 1;
			sum -= arr[j];
		}
	}
}

int main(){
	int t = 1;
	while(t--){
		sum = 0, ok = 0;
		memset(no, 1, sizeof(no));
		cin >> n >> S;
		mi = n;
		for(int i = 1; i <= n; i++)
			cin >> arr[i];
		Try(0);
		if(ok)
			cout << mi << endl;
		else
			cout << "-1" << endl;
	}
	return 0;
}
