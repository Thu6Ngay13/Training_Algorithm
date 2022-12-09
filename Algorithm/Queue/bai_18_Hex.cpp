#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

vector<int> left(vector<int> slv){
	vector<int> v = slv;
	swap(v[1], v[4]);
	swap(v[1], v[3]);
	swap(v[1], v[0]);
	return v;
}

vector<int> right(vector<int> slv){
	vector<int> v = slv;
	swap(v[4], v[1]);
	swap(v[4], v[2]);
	swap(v[4], v[5]);
	return v;
}

bool check(vector<int> slv, vector<int> ans){
	for(int i = 0; i < 6; i++)
		if(slv[i] != ans[i])
			return false;
	return true;
}

int solve(vector<int> slv, vector<int> ans){
	set<vector<int>> se;
	queue<pair<vector<int>, int>> q;
	q.push({slv, 0});
	while(q.size()){
		pair<vector<int>, int> pi = q.front(); q.pop();
		if(check(pi.first, ans)) return pi.second;
		if(!se.count(left(pi.first))){
			q.push({left(pi.first), pi.second+1});
			se.insert(left(pi.first));
		}
		if(!se.count(right(pi.first))){
			q.push({right(pi.first), pi.second+1});
			se.insert(right(pi.first));
		}
	}
	return 0;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	vector<int> slv;
	vector<int> ans;
	for(int i = 0; i < 6; i++){
		int x; cin >> x; 
		slv.push_back(x);
	}
	for(int i = 0; i < 6; i++){
		int x; cin >> x; 
		ans.push_back(x);
	}
	cout << solve(slv, ans) << endl;
	return 0;
}

