#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(int n){
 ll k=0;
 for(ll i=1;i*i<=n;i++){
  if(n%i==0){
   k++;
   if(i!=n/i) k++;
  }
 }
 return k;
}
long double y(int n){
 ll d=f(n);
 return pow((long double)n,(long double)d/2.0);
}
int main(){
 ll n;
 cin>>n;
cout<<fixed<<setprecision(0)<<y(n);
}