import sys
t=int(input())
for i in range(t):
    N,K=[int(x) for x in input().split()]
    suma=0
    list=[int(x) for x in sys.stdin.readline().rstrip().split()]
    slist=sorted(list)
    #print(slist)
    if K>0:
        k=K
        sum=0
        for x in slist[k:N-K]:
            sum+=x
        #print(sum)
        print(sum/(N-2*K))
    else:
        sum=0
        for k in slist:
            sum+=k
        print(sum/N)

