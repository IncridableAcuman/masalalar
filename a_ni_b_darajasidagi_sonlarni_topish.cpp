#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int MAX=100000;
    unordered_set<int> st;
    st.insert(1);
    for(int i=2;i*i<=MAX;i++){
        long long t=i*i;
        while(t<=MAX){
            st.insert((int)t);
            t*=i;

        }
    } 
    for(int x:a){
        if(st.count(x)) cout<<x<<" ";
    }
}