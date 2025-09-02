#include<bits/stdc++.h>
using namespace std;
static void quickSort(int left,int right,int a[]){
	int middle=(left+right)/2;
	int x=a[middle];
	int i=left;
	int j=right;
	while(i<=j){
		while(a[i]<x) i++;
		while(a[j]>x) j--;
		if(i<=j){
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
			i++;
			j--;
		}
	}
	if(left<j) quickSort(left,j,a);
	if(i<right) quickSort(i,right,a);
}
int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	quickSort(1,n,a);
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
}
