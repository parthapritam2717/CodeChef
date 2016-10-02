


def process(q,a,c):
    length=len(q)
    count=0
    for i in range(0,length):
        if q[i]==a[i]:
            count+=1
    cost=c[count]
    if count==length:
        print(c[count])
    else:
        for i in range(0,count):
            if cost<c[i]:
                cost=c[i]
        print(cost)

t=int(input())
for i in range(0,t):
    n=input()
    question=input()
    answer=input()
    cost=[int(x) for x in input().split(" ")]
    #data collection over now need to process the input
    process(question,answer,cost)
