#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAX = 1005;
const int MOD = 1e9 + 7;

bool f(int A[]){
	for(int i = 0; i < 10; i++){
		if(A[i]){
			A[i]--;
			for(int j = 0; j < 10; j++){
				if(A[j]){
					A[j]--;
					for(int k = 0; k < 10; k++){
						if(((i+j+k)%10 == 3) && A[k])
							return true;
					}
					A[j]++;
				}
			}
			A[i]++;
		}
	}
	return false;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int tt; cin >> tt;
	while(tt--){
		int A[10] = {0};
		int n; cin >> n;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			A[x%10]++;
		}
		if(f(A)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

