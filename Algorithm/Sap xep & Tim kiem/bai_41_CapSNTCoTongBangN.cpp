#include <bits/stdc++.h>
using namespace std;

int prime[123456];
void sang(){
	prime[0] = prime[1] = false;
	memset(prime, true, sizeof(prime));
	for(int i = 2; i <= sqrt(123456); i++)
		if(prime[i])
			for(int j = i*i; j < 123456; j += i)
				prime[j] = false;
}

int main(){
	sang();
	int t; cin >> t;
	while(t--){
		int n, ok = true; cin >> n;
		for(int i = 2; i <= n/2; i++)
			if(prime[i] && prime[n-i]){
				ok = false;
				cout << i << " " << n-i << endl;
				break;
			}
		if(ok) cout << -1 << endl;
	}
	return 0;
}
