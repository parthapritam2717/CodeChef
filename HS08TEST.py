from sys import stdin
X,Y=[float(x) for x in stdin.readline().split()]
x=int(X*100)
y=int(Y*100)
if X%5!=0 or y<(x+50):
    print("%.2f"%Y)
else:
    y=int(y-x-50)
    dlr=int(y//100)
    cent=int(y-int(dlr*100))
    print(str(int(dlr))+"."+str(int(cent)))


