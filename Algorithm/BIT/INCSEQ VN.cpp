#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)5e6;

int n, k, m = 100005;
int bit[100005];
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
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> k;
	for(int ) 
	return 0;
}

