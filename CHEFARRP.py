"""import sys

t = int(sys.stdin.readline().rstrip())
for i in range(0,t):
    index = int(sys.stdin.readline().rstrip())
    list = [int(x) for x in sys.stdin.readline().rstrip().split(" ")]
    dict={}
    for x in range(index):
        dict[x]=list[x]
    #print (dict)
    total=index
    cost=0
    length=len(dict)
    j=0
    flag=0
    while(j<length-1):
        x=j+1
        prev_sum=0
        prev_pro=1
        low=j
        high=j
        while(x<length):
            y=j
            prev_sum = 0
            prev_pro = 1
            while(y<=x):
                prev_pro*=dict[y]
                prev_sum+=dict[y]
                y+=1
            if prev_pro==prev_sum:
                total+=1
            x+=1
        j+=1
    print(total)"""
t = int(input())

for case in range(t):
    n = int(input())
    array = [int(x) for x in input().split()]
    count = 0
    for i, a in enumerate(array):
        s = 0
        p = 1
        #print ("a="+str(i))
        for b in array[i:]:
            s += b
            p *= b
            count += int(s == p)
    print(count)

