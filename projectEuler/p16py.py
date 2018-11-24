#include<bits/stdc++.h>
#define ll long long
n=int(input())
n=2**n;
print(n)
ans=0
while(n):
    ans+=n%10
#    print(ans,',n=',n)
    n=int(n/10)

print(ans)
