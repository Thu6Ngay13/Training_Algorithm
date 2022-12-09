#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 10001;

bool snt[Max];
void ssnt(){
	memset(snt, true, sizeof(snt));
	snt[0] = snt[1] = false;
	for(int i = 2; i <= sqrt(Max); i++){
		if(snt[i]){
			for(int j = i*i; j <= Max; j += i)
				snt[j] = false;
		}
	}
}

int solve(int s, int t){
	set<int> se;
	queue<pair<int, int>> q;
	q.push({s, 0});
	while(q.size()){
		pair<int, int> top = q.front(); q.pop();
		if(top.first == t)
			return top.second;
		
		vector<int> digit;
		int x = top.first;
		while(x){
			digit.push_back(x%10);
			x /= 10;
		}
		reverse(begin(digit), end(digit));
		
		for(int i = 0; i < 4; i++){
			for(int j = 0; j <= 9; j++){
				if(i == 0 && j == 0) continue;
				if(digit[i] != j){
					int new_nb = 0;
					for(int k = 0; k < 4; k++){
						if(i != k) new_nb = new_nb*10 + digit[k];
						else new_nb = new_nb*10 + j;
					}
					if(snt[new_nb] && !se.count(new_nb)){
						q.push({new_nb, top.second+1});
						se.insert(new_nb);
					}
				}
			}
		}
	}
	return -1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ssnt();
	int k; cin >> k;
	while(k--){
		int s, t; cin >> s >> t;
		cout << solve(s, t) << endl;
	}
	return 0;
}

