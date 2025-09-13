#include<bits/stdc++.h>
using namespace std;
map<int,int> f(int n) {
	map<int,int> m;
	if(n==1) return {};
	while(n%2==0) {
		m[2]++;
		n/=2;
	}
	while(n%3==0) {
		m[3]++;
		n/=3;
	}
	for(int i=5; i*i<=n; i+=6) {
		while(n%i==0) {
			m[i]++;
			n/=i;
		}
		while(n%(i+2)==0) {
			m[i+2]++;
			n/=(i+2);
		}
	}
	if(n>3) {
		m[n]++;
	}
	return m;
}
int main() {
	int n;
	cin>>n;
	map<int,int> mp=f(n);
	for(auto e:mp) {
		cout<<e.first<<" "<<e.second<<endl;;
	}
}