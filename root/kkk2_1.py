# Enter your code here. Read input from STDIN. Print output to STDOUT
a=input()
b=input()
ta=a.replace('0','')
tb=b.replace('0','')

a=int(a)
b=int(b)
c=a+b
c=(str)(c)
tc=c.replace('0','')
tc=int(tc)
ta=int(ta)
tb=int(tb)
if((ta+tb)==tc):
    print('surprised')
else:
    print('unsurprised')
