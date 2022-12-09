#include <bits/stdc++.h>
#include <fstream>
using namespace std;
const int N = 2e5 + 5;

struct SS{
	long long x, y;
	SS(long long _x, long long _y){
		x = _x;
		y = _y;
	}
};

bool cmp(SS a, SS b){
	if(a.x != b.x) return a.x > b.x;
	return a.y < b.y;
}

int n;
int BIT[N];
vector<SS> g;

void _update(int x, int y, int val){
	while(x <= y){
		BIT[x] += val;
		x += (x&-x);
	}
}

long long _get(int x, int y){
	long long sum = 0;
	while(x <= y){
		sum += BIT[x];
		x += (x&-x);
	}
	return sum;
}

void solve(){
	cin >> n;
	for(int i = 0, x, y; i < n; i++){
		cin >> x >> y;
		g.emplace_back(x, y);
	}
	sort(g.begin(), g.end(), cmp);
	for(auto temp:g){
		cout << _get(temp.x, temp.y) << " ";
		_update(temp.x, temp.y, 1);
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	solve();

	return 0;
}


