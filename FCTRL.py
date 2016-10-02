from sys import stdin as sin
list_index=[]
list=dict()
def fn(n):
    total=0
    while(n>0):
        total+=n//5
        n//=5
    return total
t=int(input())
for i in range(t):
    s=sin.readlines()
    for j in s:
        print(fn(int(j)))
