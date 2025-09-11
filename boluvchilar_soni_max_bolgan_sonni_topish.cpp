#include<bits/stdc++.h>
using namespace std;
const int MAX_N=2000000;
vector<int> cnt(MAX_N+1,0);
void f(){
 for(int i=1;i<=MAX_N;++i){
  for(int j=i;j<=MAX_N;j+=i){
   cnt[j]++;
  }
 }
}
int main(){
 f();
 int n;
 cin>>n;
 vector<int> a(n);
 for(int i=0;i<n;i++){
  cin>>a[i];
 }
 int m=0,r=0;
 for(int i:a){
  int d=cnt[i];
  if(d>m||(d==m&&i>r)){
   m=d;
   r=i;
  }
 }
 cout<<r;
}