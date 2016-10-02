import sys
t=int(input())
s=set()
for i in range(t*2):
    n=(sys.stdin.readline().rstrip())
    if(n!=''):
        k=int(n)%1007
        if(k not in s):
            print()
            print(k)
            s.add(k)
