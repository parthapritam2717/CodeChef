from sys import stdin as sin
t=int(input())
list=[]
winner=0
lead=0
S=0;T=0
for i in range(t):
    t,s=map(int,sin.readline().rstrip().split())
    T=T+t
    S=S+s
    if(T>S):
        if(lead<(T-S)):
            lead=(T-S)
            winner=1
    else:
        if(lead<(S-T)):
            lead=(S-T)
            winner=2
print(winner,end=" ")
print(lead ,end=" ")