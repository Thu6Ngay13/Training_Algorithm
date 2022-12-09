#include <iostream>
#include <cstring>
using namespace std;
using ll = long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
    int v; cin >> v;
    for(int i = 1; i <= v; i++)
        for(int j = 1; j <= v; j++){
        	int x; cin >> x;
            if(x && j > i) cout << i << " " << j << " " << x << "\n";
		}
    return 0;
}

