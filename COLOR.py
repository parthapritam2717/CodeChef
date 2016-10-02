import sys

t = int(sys.stdin.readline().rstrip())
for i in range(0,t):
    item=[0,0,0]
    ind=int(sys.stdin.readline().rstrip())
    list = (sys.stdin.readline().rstrip())
    #print (list)
    for j in list:
        if j=="R":
            item[0]+=1
        elif j=="G":
            item[1]+=1
        elif j=='B':
            item[2]+=1
    item.sort()
    if item[0]==0:
        print(min(item[1],item[2]))
        continue
    else:
        print(item[0]+item[1])

