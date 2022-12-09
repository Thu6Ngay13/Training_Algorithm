#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

int n, m, no[Max]; // no[i] = false : i thuoc tap Tree, used[i] = true : i thuoc tap v
int parent[Max], d[Max];
vector<pair<int, int>> v[Max];

struct canh{
	int x, y, w;
};

void ip(){
	cin >> n >> m;
	memset(no, 1, sizeof(no));
	for(int i = 1; i <= n; i++) d[i] = INT_MAX;
	for(int i = 0; i < m; i++){
		int x, y, w; cin >> x >> y >> w;
		v[x].push_back({y, w});
		v[y].push_back({x, w});
	}
}

void prim(int u){
	int ans = 0;
	vector<canh> Tree;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
	Q.push({0, u}); //day trong so la 0 va dinh u vao Q
	while(Q.size()){
		pair<int, int> top = Q.top(); Q.pop();
		int dinh = top.second, trongso = top.first;
		
		if(!no[dinh]) continue;
		ans += trongso;
		no[dinh] = 0; //dinh da vao cay
		
		if(u != dinh) Tree.push_back({dinh, parent[dinh], trongso});
		
		//duyet tat ca cac dinh ke 
		for(auto it:v[dinh]){
			int y = it.first, w = it.second;
			if(no[y] && w < d[y]){
				//kiem tra y co nam trong v hay khong
				Q.push({w, y});
				d[y] = w; //d[y] : Trong so nho nhat cua tat ca cac canh noi voi dinh y
				parent[y] = dinh;
			}
		}
	}
	cout << ans << endl;
	for(auto it:Tree)
		cout << it.x << " " << it.y << " " << it.w << endl;
}

//6 8
//1 2 1
//1 6 2
//2 6 1
//2 3 3
//6 4 8
//3 5 5
//4 5 6
//3 4 4

int main(){
	ip();
	prim(1);
	return 0;
}

