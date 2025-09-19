#include<bits/stdc++.h>//https://leetcode.com/problems/intersection-of-two-arrays/description/?envType=problem-list-v2&envId=binary-search
using namespace std;
vector<int> f(vector<int> a,vector<int> b){
 set<int> st;
 vector<int> c;
 for(int i=0;i<a.size();i++){
  for(int j=0;j<b.size();j++){
   if(a[i]==b[j]){
    st.insert(b[j]);
   }
  }
 }
 for(int i:st){
  c.push_back(i);
 }
 return c;
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
 int m;
 cin>>m;
 vector<int> b;
 for(int i=1;i<=m;i++){
  int k;
  cin>>k;
  b.push_back(k);
 }
 vector<int> res=f(a,b);
 for(int i=0;i<res.size();i++){
  cout<<res[i]<<" ";
 }
}
/*
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        vector<int> vt;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    st.insert(nums2[j]);
                }
            }
        }
        for(int i:st){
            vt.push_back(i);
        }
        return vt;
    }
};
*/