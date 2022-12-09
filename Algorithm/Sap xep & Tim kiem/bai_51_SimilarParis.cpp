#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n, tmp = 1e9+5; cin >> n;
		int a[n];
		vector<int> chan, le;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i]%2)
				le.push_back(a[i]);
			else
				chan.push_back(a[i]);
		}
		sort(a, a+n);
		for(int i = 1; i < n; i++)
			if(min(tmp, a[i]-a[i-1]))
				tmp = min(tmp, a[i]-a[i-1]);
		if(le.size()%2 && chan.size()%2 && tmp == 1
		||le.size()%2 == 0 && chan.size()%2 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
