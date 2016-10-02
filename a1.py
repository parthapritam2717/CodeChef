from sys import stdin as sin
import operator
t=int(sin.readline().rstrip())
for i in range(t):
    length=[]
    rating=[]
    n=int(sin.readline().rstrip())
    length=[int(x) for x in sin.readline().rstrip().split()]
    rating=[int(x) for x in sin.readline().rstrip().split()]
    q=[]
    p=dict()
    for j in range(n):
        q.append(length[j]*rating[j])
    for j in range(0,n):
        p[str(j)]=[q[j],rating[j],length[j]]
    ## print(p)
    new=dict()
    new=sorted(p.items(),key=operator.itemgetter(1))
    #print(new)
    max=[]
    max=new[len(new)-1][1]
    maxi =len(new)-1
    for j in range(len(new)-1,-1,-1):
        ind=new[j][1]
        #print(ind)
        if ind==max:
            #print(ind)
            key=new[j][0]
            if int(key)<maxi:
                maxi=int(key)
        else:
            break
    print(maxi+1)










