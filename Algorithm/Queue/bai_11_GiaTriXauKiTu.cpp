#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int Max = 1001;

ll solve(int k, string s){
    map<char, int> mp;
    priority_queue<int> Q;
    ll ans = 0;
    for(int i = 0; i < (int)s.size(); i++) mp[s[i]]++;
    for(auto it:mp) Q.push(it.second);
    while(Q.size() && k--){
        int top = Q.top()-1; Q.pop();
        if(top) Q.push(top);
    }
    while(Q.size()){
        ans += 1ll*Q.top()*Q.top();
        Q.pop();
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        string s; cin >> s;
        cout << solve(k, s) << endl;
    }
    return 0;
}

