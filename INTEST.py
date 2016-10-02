from sys import stdin
n,k=map(int,stdin.readline().rstrip().split())
count=0
list=dict()
strings=stdin.readlines()
for s in strings:
    if s not in list:
        list[s]=1
    else:
        list[s]+=1
for key,val in list.items():
    if int(key)%k==0:
        count+=val
print(count)

