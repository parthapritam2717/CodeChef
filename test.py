import sys,math
t= int(input())
for case in range(t):
    n = int(input())
    ind=0
    array={}
    result=[]
    for x in sys.stdin.readline().rstrip().split(" "):
        array[str(ind)]=int(x)
        ind+=1
    #print(array)
    count=1
    i=0
    flag=1
    for i in range(0,n):
        #print (sum)
        #print("happy="+str(i))
        if count>1:
            count-=1
            result.append(str(count))
            #print(result)
            continue
        sum=array[str(i)]
        for j in range(i+1,n):
            #print(j)
            flaga=0
            #print(array[])
            if sum<0 and array[str(j)]>0:
                    count+=1
                    sum=j
            elif sum>0 and array[str(j)]<0:
                count+=1
                sum=array[str(j)]
            else:
                break
        #print("count="+str(count))
        result.append(str(count))
        #print(result)
        #i+=1
    res=" ".join(result)
    print(res)
