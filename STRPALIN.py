def fn(a,b):
    for i in a:
        for j in b:
            if i==j:
                print("Yes")
                return
    print("No")
    return

t=int(input())
for i in range(t):
    A=input()
    B=input()
    fn(A,B)
