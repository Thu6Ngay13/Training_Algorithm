#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	vector<int> vec(a, a+n);
	bool ok = true;
	sort(vec.begin(), vec.end());
	int i = 0, j = n-1;
	while(a[j] == vec[j] && j > 0) j--;
	while(a[i] == vec[i] && j > i) i++;
	for(int k = i+1; k <= j && ok; k++)
		if(a[k-1] < a[k])
			ok = false;
	if(ok)
		cout << "yes" << endl << i+1 << " " << j+1 << endl;
	else
		cout << "no" << endl;
	return 0;
}
