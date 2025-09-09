//Bir o'lchamli sonli massiv berilgan. Massiv elementlari o'sish tartibida berilgan. 
//Keyin m ta son beriladi. Bu sonlardan nechtasi berilgan massivda uchrashini topuvchi dasturtuzing.
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int k=0;
	for(int i=1;i<=n;i++){
		int z;
		cin>>z;
		if(binary_search(a,a+n,z)){
				k++;	
		}
	}
	cout<<k;
}
