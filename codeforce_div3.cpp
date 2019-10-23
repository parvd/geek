q=int(input())
for i in range(q):
    p=int(input())
    a=list(map(int,input().split()))
    c=True
    r=[]
    r.append(a[0])
    for m in range(1,len(a)):
        for j in range(len(r)):
            if abs(r[j]-a[m])<=1:
                    c=False
                    break
        if c==False:
            break
        else:
            r.append(a[m])
    if c:
        print(1)
    else:
        print(2)
