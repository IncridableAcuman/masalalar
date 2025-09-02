#include<bits/stdc++.h>
using namespace std;
void quickSort(vector<int> a){
	int middle=a.size()/2;
	int x=a[middle];
	int left=0;
	int right=0;
	int i=0;
	int j=0;
	while(a[i]<x) i++;
	while(a[j]>x) j--;
}
int main(){
	int n;
	cin>>n;
	vector<int> a;
	for(int i=1;i<=n;i++){
		int k;
		cin>>k;
		a.push_back(k);
	}
	quickSort(a);
}
