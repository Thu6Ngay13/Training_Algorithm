#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

struct canh{
	int x, y, w;
}; 

// v[x].pb({y, w}), x = dinh_hientai, y = dinh_ke, w = trong_so
vector<pair<int, int>> v[Max];
int n, m, d[Max], parent[Max], no[Max];

void ip(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y, w; cin >> x >> y >> w;
		v[x].push_back({y, w});
		v[y].push_back({x, w});
	}
	for(int i = 1; i <= n; i++){
		d[i] = INT_MAX;
		no[i] = true;
	}
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

void prim(int u){
	int ans = 0;
	vector<canh> Tree;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
	Q.push({0, u}); // iter_1 = trong_so, iter_2 = dinh_hientai
	while(Q.size()){
		pair<int, int> top = Q.top(); Q.pop();
		int w = top.first; 
		int x = top.second;
		
		//dinh nay da duoc tham chua, neu roi thi bo qua
		if(!no[x]) continue;
		
		//neu chua tham thuc hien: tinh ans, danh dau dinh hien tai 
		ans += w; 
		no[x] = false;
		
		//kiem tra dinh hien tai co khac dinh dua vao hay khong neu co
		//thi day vao Tree(ket qua cua cay dang xay dung):
		if(x != u) Tree.push_back({x, parent[x], w});
		
		//duyet tat ca dinh ke voi no
		//check (x->y = w) < (somewhere -> y) : true?
		for(auto it:v[x]){
			int y = it.first, w = it.second;
			if(no[y] && w < d[y]){
				Q.push({w, y});
				d[y] = w;
				parent[y] = x;
			}	
		}
	}
	cout << ans << endl;
}

int main(){
	ip();
	prim(1);
	return 0;
}

