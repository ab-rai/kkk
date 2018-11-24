t=int(input())
for i in range(t):
    temp=list(map(int,input().rstrip().split()))
    n=temp[0]
    k=temp[1]
    lst=list(map(int,input().rstrip().split()))
    lst.sort(reverse=True)
    #print(lst)
    x=k-1
    try:
    #    print('k=',k,'x=',x,'n=',n)
        while(x<n and lst[x]==lst[x+1]):
        #    print('aaya')
            x+=1
        #    print('x=',x)
    except:
        pass
    print(x+1)
