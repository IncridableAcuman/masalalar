#include<bits/stdc++.h>
using namespace std;
const int MAX_N=100000;
vector<vector<int>> a(MAX_N+1);
void f(){
 for(int i=1;i<=MAX_N;i++){
  for(int j=i;j<=MAX_N;j+=i){
   a[j].push_back(i);
  }
 }
}
int main(){
 f();
 int q;
 cin>>q;
 while(q--){
  int n,k;
  cin>>n>>k;
  if(k>a[n].size()){
   cout<<-1<<endl;
  }else{
   cout<<a[n][k-1]<<endl;
  }
 }
}