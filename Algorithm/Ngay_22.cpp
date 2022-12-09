#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int m, n;
vector<int> v[1001]; 
bool no[1001]; //check xem da duyet qua hay chua

/* 
- topological sort
stack<int> topo; //luu thu tu topo
int indegree[1001]; //luu ban bac vao cua dinh do

+ DFS : duyet topo cho do thi co huong khong co chu trinh
void DFS(int i){ 
	no[i] = false;
	for(auto it:v[i])
		if(no[it])
			DFS(it);
	topo.push(i);
}

+ Kahn : duyet topo cho do thi co huong co chu trinh : nhu BFS
void Kahn(int i){
	queue<int> q;
	for(int i = 1; i <= m; i++)
		if(!indegree[i])
			q.push(i);
	while(q.size()){
		int u = q.front(); q.pop();
		cout << u << " ";
		for(auto it:v[u]){
			indegree[it]--; //xoa ban bac vao cua dinh it di 1 don vi
			if(!indegree[it])
				q.push(it);
		}
	}
}
*/

/*
int parent[1001];

+ check xem do thi co chu trinh khong dfs
bool dfs(int u, int par){
	no[u] = false;
	for(int it:v[u]){
		if(no[it]){
			if(dfs(it, u))
				return true;
		}
		else if(it != par) //dinh it da duoc tham, nhung ma it khong phai cha truc tiep cua u
			return true;
	}
	return false;
}

+ check xem do thi co chu trinh khong bfs
bool bfs(int i){
	queue<int> q;
	q.push(i);
	while(q.size()){
		int tmp = q.front(); q.pop();
		for(int it:v[tmp]){
			if(no[it]){
				q.push(it);
				no[it] = false;
				parent[it] = tmp;
			}
			else if(it != parent[tmp])
				return true;
		}
	}
	return false;
}
*/

/*
int color[1001];

+check xem do thi co huong co chu trinh khong dfs
bool dfs(int i){
	color[i] = 1;
	for(auto it:v[i]){
		//kiem tra dinh it co mau la 0 : chua duyet hay chua
		if(color[it] == 0){
			if(dfs(it)) return true;
		}
		//Neu co mau ==  1 nghia la da duyet 1 lan roi va gio duyet lai lan nua thi la 1 chu trinh
		else if(color[it] == 1)
			return true;
	}
	color[i] = 2; //da duyet xong dinh i
	return false;
}

+ check do thi hai phia
bool dfs(int u, int par){
	color[u] = 3 - color[par]; //mau cua con = 3 - mau cua bo, do bo va con khac mau nhau
	for(auto it:v[u]){
		if(!color[it]){
			if(!dfs(it, u)) return false; //khong thoa do thi hai phia
		}
		else if(color[it] == color[u])
			return false;
	}
	return true;
}
*/

int main(){
	memset(no, true, sizeof(no));
	memset(indegree, 0, sizeof(indegree));
	memset(color, 0, sizeof(color));
	cin >> m >> n;
	for(int i = 0; i < n; i++){
		int x, y; cin >> x >> y;
		v[x].push_back(y);
//		v[y].push_back(x);
//		indegree[y]++;
	}
	
//	DFS(1);
//	for(int i = 0; i < m; i++){
//		cout << topo.top() << " ";
//		topo.pop();
//	}

//	Kahn(1);
	
//check chu trinh cua do thi
//	int ok = false;
//	for(int i = 1; i <= m; i++)
//		//no[i] && dfs(i, -1)
//		if(no[i] && bfs(i)){
//			ok = true;
//			break;
//		}
//	cout << ok << endl;
		
//	int ok = false;
//	for(int i = 1; i <= m; i++)
//		if(!color[i] && dfs(i)){
//			ok = true;
//			break;
//		}
//	cout << ok << endl;

//check do thi hai phia
	int ok = true;
	color[0] = 2;
	for(int i = 1; i <= m; i++)
		if(!color[i] && !dfs(i, 0)){
			ok = false;
			break;
		}
	string ans = ok?"NO":"YES";
	cout << ans << endl;

	return 0;
}

