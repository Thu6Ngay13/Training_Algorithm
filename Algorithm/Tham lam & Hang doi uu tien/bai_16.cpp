#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int t; cin >> t; 
	while(t--){
		int s, d; cin >> s >> d;
		int nb[d] = {0};
		if(s <= d*9){
			s--;
			for(int i = d-1; i >= 0; i--)
				if(s >= 9){
					nb[i] = 9;
					s -= 9;
				}
				else{
					nb[i] = s;
					s = 0;
				}
			nb[0] += 1;
			for(int i = 0; i < d; i++)
				cout << nb[i];
			cout << endl;
		}
		else
			cout << -1 << endl;
		
	}
	return 0;
}

