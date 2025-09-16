#include<bits/stdc++.h>
using namespace std;//1 dan n gacha sonlarni pivot sonni topish
int main(){// [1,8]=> 1+2+3+4+5+6=6+7+8
 int n,s=0,leftSum=0,rightSum=0,t=0;
 cin>>n;
 s=n*(n+1)/2;
 for(int i=1;i<=n;i++){
  rightSum=s-leftSum-i;
  if(leftSum==rightSum){
   t=i;
  }
  leftSum+=i;
 }
 t?cout<<t:cout<<-1;
}