#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 200005;
const int MOD = 1e9 + 7;

struct Range{
	int x;
	int y;
};

bool cmp(Range a, Range b){
	if(a.x == b.x) return a.y < b.y;
	return a.x < b.x;
}

int n, bit1[MAX], bit2[MAX];
Range rg[MAX];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n;
	for(int i = 1; i <= n; i++) 
		cin >> rg[i].x >> rg[i].y;
	sort(rg, rg+n, cmp);
	for(int i = 1; i <= n; i++) 
		cout << rg[i].x << " " << rg[i].y << endl;
	return 0;
}

