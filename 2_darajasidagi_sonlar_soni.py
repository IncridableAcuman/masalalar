n=int(input())
a=list(map(int,input().split()))
k=0
for i in a:
 if i>0 and (i & (i-1))==0:
  k+=1

print(k)