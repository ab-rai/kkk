import math
t=int(input())
for i in range(t):
    bit=0
    byte=0
    nibble=0
    n=int(input())
    n-=1
    di=int(n/26)
    cnt=int((math.pow(2,di)))
    if cnt==0:
        cnt=1
    rem=n%26;
    if(rem>=10):
        byte=cnt
    elif(rem>=2):
        nibble=cnt;
    else:
        bit=cnt;
    print(bit," ",nibble," ",byte)
