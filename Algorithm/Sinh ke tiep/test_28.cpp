#include <bits/stdc++.h>
using namespace std;

int k, n, ok;
char c;
char a[100];

void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = 1;
    }
}
void next(){
    int i = n;
    while(i >= 1 && a[i] == n){
        --i;
    }
    if(i == 0){
        ok = 0;
    }
    else{
        a[i]++;
        for(int j = i + 1; j <= n; j++){
            a[j] = 1;
        }
    }
}
int main(){
    cin >> n;
    string s = "";
    vector<string> hoanvi;
    for(int i = 1; i <= n; i++){
        s += 'A' + i - 1;
    }
    do{
        hoanvi.push_back(s);
    }while(next_permutation(s.begin(), s.end()));
    vector<string> chinhhop;
    ok = 1;
    ktao();
    while(ok){
        string tmp = "";
        for(int i = 1; i <= n; i++){
            tmp += to_string(a[i]);
        }
        chinhhop.push_back(tmp);
        next();
    }
    for(string x : hoanvi){
        for(string y : chinhhop){
            cout << x << y << endl;
        }
    }
}

