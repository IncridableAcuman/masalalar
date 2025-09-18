#include<bits/stdc++.h>
using namespace std;
bool binarySearch(vector<vector<int>> & arr,int target){
 int cols=arr[0].size();
 int rows=arr.size();
 int left=0;
 int right=rows*cols-1;
 while(left<=right){
  int mid=left+(right-left)/2;
  int mid_row=mid/cols;
  int mid_col=mid&cols;
  if(arr[mid_row][mid_col]==target){
   return true;
  } else if(arr[mid_row][mid_col]<target){
   left=mid+1;
  }else{
   right=mid-1;
  }
 }
 return false;
}
int main(){
 int n,m;
 cin>>n>>m;
 vector<vector<int>> a(n,vector<int> (m,0));
 for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
   cin>>a[i][j];
  }
 }
 int x;
 cin>>x;
 binarySearch(a,x)? cout<<"Yes":cout<<"No";
}