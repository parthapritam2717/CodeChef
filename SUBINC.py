import sys

t = int(sys.stdin.readline().rstrip())
for i in range(0,t):

    index = int(sys.stdin.readline().rstrip())

    # print(count)
    list = [int(x) for x in sys.stdin.readline().rstrip().split(" ")]
    # now process the data
    """for j in range(0, index - 1):
        low = j
        for k in range(j + 1, index):
            if list[k - 1] <= list[k]:
                # print(list[k - 1:k + 1], j)
                count += 1
                continue
            else:

                break"""



    count = 0
    total = index
    prev=list[0]
    for j in list[1:]:
        if prev<=j:
            count+=1
            total += count
        else:
            count=0
        prev=j
    print(total)