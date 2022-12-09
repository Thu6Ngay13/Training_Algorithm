#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int limit = 1e9;

int n, m;
vector<ll> candies;
map<int, int> bit;

void update(int i){
	while(i <= n){
		bit[i]++;
		i += i&-i;
	}
}

int candies_was_eaten(int i){
	int ans = 0;
	while(i > 0){
		ans += bit[i];
		i -= i&-i;
	}
	return ans;
}

void solve(int quantity){
	int l = 0, r = n;
	while(l < r){
		int m = (l+r)/2;
		if(candies[m] - candies_was_eaten(m+1) >= quantity) r = m;
		else l = m+1;
	}
	cout << n-r << endl;
	update(l+1);
}
int main(){
	cin >> n; candies.resize(n);
	for(auto &x:candies) cin >> x;
	sort(candies.begin(), candies.end());
	cin >> m;
    while(m--){
    	int quantity; cin >> quantity;
    	solve(quantity);
    }
}
