import math

def fn(i):
    f=1
    item=i
    div=dict()
    i = 2
    while(True):
        #print(item,i)
        if(item==1):
            #print(div)
            break
        if item%i==0:
            item=item//i
            if str(i) not in div:
                div[str(i)]=1
                i=2
                continue
            else:
                div[str(i)]+=1
                i=2
                continue
        else:
            i+=1
    for i,k in div.items():
        f=1
        temp=0
        if int(i)%2!=0:
            temp=0
            for j in range(0,int(k)+1):
                temp+=(math.pow(int(i),j))
            f=f*temp
    #print(int(f))
    return f



from sys import stdin as sin
import operator
t=int(sin.readline().rstrip())
for i in range(t):
    l,r=[int(x) for x in sin.readline().rstrip().split()]
    f=0
    for i in range(l,r+1):
        f+=fn(i)
    print(f)

