import sys
t=int(input())
for i in range(0,t):
    list = []
    z = int(input())
    for j in range(0,z):
        list+=[int(x) for x in sys.stdin.readline().rstrip().split()]
    #data collected now lets process the data and give output
    #print (list)#here list is a dictionary
    #sort the list
    #print (list)
    newlist=sorted(range(len(list)),key=lambda k:list[k])
    #print (newlist)
    item=0
    step=0
    prev=newlist[0]
    for i in range(1,len(newlist)):
        next=newlist[i]
        step+=abs(next//z-prev//z)
        step+=abs(next%z-prev%z)
        prev=next
    print (step)