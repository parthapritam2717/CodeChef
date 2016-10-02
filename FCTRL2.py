from sys import stdin as sin
list_index=[]
list=dict()
def fn(n):
    f=1
    #check if a value less that that has already been calculated
    for i in range(1,n+1):
        f*=i
    return f






t=int(input())
for i in range(t):
    n=int(sin.readline().rstrip())
    print(fn(n))