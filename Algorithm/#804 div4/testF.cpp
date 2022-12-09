#include<bits/stdc++.h>
using namespace std;
long long n,ans,a,v[200100];
void re(){
	ans=0;
	cin >>n;
	for(int i=0;i<=n;i++){
		v[i]=0;
	}
	for(int i=1;i<=n;i++){
		cin >>a;
		v[i]+=v[i-1];
		if(a<i){
			v[i]++;
			ans+=v[a-1];
		}
	}
	cout <<ans << endl;
	return;
}
int main(){
	long long t;
	cin >>t;
	while(t--){
		re();
	}
	return 0;
}
