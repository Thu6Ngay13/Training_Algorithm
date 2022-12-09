#include <iostream>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
using ll = long long;

int main(){
	int n, m; cin >> n >> m;
	multiset<int> se;
	for(int i = 0; i < n; i++){
		int x; cin >> x; se.insert(x);
	}
//	for(int i = 0; i < m; i++){
//		int x; cin >> x;
//		auto it = upper_bound(se.begin(), se.end(), x);
//		if(it != se.begin()){
//			cout << *(--it) << endl;
//			se.erase(it);
//		}
//		else
//			cout << -1 << endl;
//	}
	return 0;
}

