from sys import stdin as sin
t=int(input())
list=[]
for i in range(t):
    list.append(int(sin.readline().rstrip()))
list.sort()
for i in list:
    print(i)
