#include<bits/stdc++.h> /// sonlarning modasi
using namespace std;
int sonlarniModasi(vector<int> a){
	unordered_map<int,int> freq;
	for(int i=0;i<a.size();i++){
		freq[a[i]]++;
	}
	int max=0,moda=a[0];
	for(int i=0;i<a.size();i++){
		if(freq[a[i]]>max){
			max=freq[a[i]];
			moda=a[i];
		}
	}
	return moda;
}
int main(){
	int n;
	cin>>n;
	vector<int> a;
	for(int i=1;i<=n;i++){
	 int k;cin>>k;
	 a.push_back(k);
	}
	cout<<sonlarniModasi(a);
}
