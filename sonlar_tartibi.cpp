#include<bits/stdc++.h>
using namespace std;
int main(){
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
	int n;
	cin>>n;
	vector<int> a;
	for(int i=1;i<=n;i++){
		int k;
		cin>>k;
		a.push_back(k);
	}
	sort(a.begin(),a.end());
	int m;
	cin>>m;
	while(m--){
		int z;
		cin>>z;
		auto it=lower_bound(a.begin(),a.end(),z);
		if(it!=a.end() && *it==z){
			cout<<(it-a.begin()+1)<<endl;
		}else{
			cout<<-1<<endl;
		}
	}
}
