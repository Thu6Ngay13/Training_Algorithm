#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m = 60005, bit[60005];
void update(int i, int val){
	while(i > 0){
		bit[i] += val;
		i -= (i&-i);
	}
}

int get(int i){
	int sum = 0;
	while(i < m){
		sum += bit[i];
		i += (i&-i);
	}
	return sum;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	int ans = 0;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		update(x, 1);
		ans += get(x+1);
	}
	cout << ans << endl;
	return 0;
}

