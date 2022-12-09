#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;

string S;
int f[MAX];
void solve(){
	f[0] = stoi(S[i]);
	for(int i = 1; i < S.size(); i++)
		f[i] = f[i-1]*10 + stoi(S[i])*i;
	return f[S.size()-1]
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> S;
	solve();
	return 0;
}

