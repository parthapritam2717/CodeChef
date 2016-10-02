t=int(input())
cost = [int(x) for x in input().split(" ")]
length=len(cost)
count=0
for i in range(0,length):
    if cost[i]%2==0:
        count+=1
if count>(length-count):
    print("READY FOR BATTLE")
else:
    print("NOT READY")