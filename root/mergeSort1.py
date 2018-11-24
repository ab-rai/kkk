def mergeSort(alist):
    #print("Splitting ",alist)
    if len(alist)>1:
        mid = len(alist)//2
        lefthalf = alist[:mid]
        righthalf = alist[mid:]

        mergeSort(lefthalf)
        mergeSort(righthalf)

        i=0
        j=0
        k=0
        while i < len(lefthalf) and j < len(righthalf):
            if lefthalf[i] < righthalf[j]:
                alist[k]=lefthalf[i]
                i=i+1
            else:
                alist[k]=righthalf[j]
                j=j+1
            k=k+1

        while i < len(lefthalf):
            alist[k]=lefthalf[i]
            i=i+1
            k=k+1

        while j < len(righthalf):
            alist[k]=righthalf[j]
            j=j+1
            k=k+1
    #print("Merging ",alist)
import random
import time
alist=[]
t1=time.time()

for i in range(10000000):
    alist.append(random.randint(1,100000000000))
#alist = list(map(int,input().rstrip().split()))
#print(alist)
t2=time.time()
#print(b)
print('time= ',t2-t1)

b=alist[:]
c=alist[:]
t1=time.time()
#mergeSort(b)
t2=time.time()
#print(b)
#print('time= ',t2-t1)
t1=time.time()
c.sort()
t2=time.time()
#print(c)
print('time= ',t2-t1)
